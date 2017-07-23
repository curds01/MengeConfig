#include "simulator_cache.h"

#include <cassert>

#include "MengeCore/Agents/BaseAgent.h"

using Menge::Agents::BaseAgent;
using Menge::Math::Vector3;

/////////////////////////////////////////////////////////////////////////////////////////////
//						Implementation of SimulatorState
/////////////////////////////////////////////////////////////////////////////////////////////

SimulatorState::SimulatorState( size_t agent_count ) : _positions(agent_count) {}

/////////////////////////////////////////////////////////////////////////////////////////////

Vector3 SimulatorState::get_agent_position( const BaseAgent* agent ) const {
  size_t id = agent->_id;
  assert( id < _positions.size() );
  return _positions[ id ];
}

/////////////////////////////////////////////////////////////////////////////////////////////

void SimulatorState::reset( size_t agent_count ) {
  _positions.resize( agent_count );
}