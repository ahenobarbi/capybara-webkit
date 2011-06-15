#include <QNetworkCookieJar>
class CleanableCookieJar: public QNetworkCookieJar{
  public:
    void clean_session_cookies();
    virtual ~CleanableCookieJar();
    CleanableCookieJar(QObject * parent = 0 );
};
