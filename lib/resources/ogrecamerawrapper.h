/*!
 * \copyright (c) Nokia Corporation and/or its subsidiary(-ies) (qt-info@nokia.com) and/or contributors
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 *
 * \license{This source file is part of QmlOgre abd subject to the BSD license that is bundled
 * with this source code in the file LICENSE.}
 */

#ifndef OGRECAMERAWRAPPER_H
#define OGRECAMERAWRAPPER_H

#include <QObject>
#include <Ogre.h>

class OgreCameraWrapper : public QObject
{
    Q_OBJECT

public:
    OgreCameraWrapper(QObject *parent = 0);
    virtual ~OgreCameraWrapper() {}
    Ogre::Camera* camera() { return m_camera; }

protected:
    Ogre::Camera *m_camera;
};

#endif // OGRECAMERAWRAPPER_H
