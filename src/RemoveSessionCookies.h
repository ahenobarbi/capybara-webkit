#include "Command.h"

class WebPage;

class RemoveSessionCookies: public Command {
  Q_OBJECT

  public:
    RemoveSessionCookies(WebPage *page, QObject *parent = 0);
    virtual void start(QStringList &arguments);
};
