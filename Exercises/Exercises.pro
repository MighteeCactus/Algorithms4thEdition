TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    tests.cpp \
    helpers.cpp \
    exercises.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ADT/release/ -lADT
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ADT/debug/ -lADT
else:unix: LIBS += -L$$OUT_PWD/../ADT/ -lADT

INCLUDEPATH += $$PWD/../ADT
DEPENDPATH += $$PWD/../ADT

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../ADT/release/libADT.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../ADT/debug/libADT.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../ADT/release/ADT.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../ADT/debug/ADT.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../ADT/libADT.a

HEADERS += \
    tests.h \
    helpers.h \
    exercises.h

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Search/release/ -lSearch
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Search/debug/ -lSearch
else:unix: LIBS += -L$$OUT_PWD/../Search/ -lSearch

INCLUDEPATH += $$PWD/../Search
DEPENDPATH += $$PWD/../Search

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Search/release/libSearch.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Search/debug/libSearch.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Search/release/Search.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Search/debug/Search.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../Search/libSearch.a
