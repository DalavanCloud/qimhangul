/* qimhangul - Qt input module for hangul
 * Copyright (C) 2004 Choe Hwanjin
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

#include <QString>
#include <QStringList>
#include <QInputContextPlugin>

class QInputContextPluginHangul : public QInputContextPlugin
{
public:
    QInputContextPluginHangul();
    ~QInputContextPluginHangul();

    virtual QStringList keys() const;
    virtual QInputContext* create(const QString &key);
    virtual QStringList languages( const QString &key);
    virtual QString displayName( const QString &key );
    virtual QString description( const QString &key );
};

Q_EXPORT_PLUGIN(QInputContextPluginHangul)
