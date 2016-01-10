#ifndef __SCENE_VIEWER_H__
#define __SCENE_VIEWER_H__

#include <QtWidgets/qwidget.h>

QT_BEGIN_NAMESPACE
class QToolBar;
class QLabel;
QT_END_NAMESPACE
class GLWidget;

class SceneViewer : public QWidget {
	Q_OBJECT

public:
	/*!
	 *	@brief		Constructor.
	 *
	 *	@param		parent		The optional parent 
	 */
	SceneViewer(QWidget * parent = 0x0);

private:

	/*!
	 *	@brief		Updates the status text on the viewer.
	 */
	void updateStatus();

	/*!
	*	@brief		Toggles whether or not the grid is drawn in the scene.
	*				A grid that is not visible cannot be used for snapping.
	*
	*	@param		state		True to enable grid drawing, false to disable.
	*/
	void toggleGrid(bool state);
	
	/*!
	 *	@brief		The tool bar for this window.
	 */
	QToolBar * _toolBar;

	/*!
	 *	@brief		The Open GL viewer.
	 */
	GLWidget * _glView;

	/*!
	 *	@brief		The status text for the viewer.
	 */
	QLabel * _statusLabel;
};

#endif	// __SCENE_VIEWER_H__