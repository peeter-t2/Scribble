// This file is generated by kconfig_compiler from okular_core.kcfg.
// All changes you do to this file will be lost.
#ifndef OKULAR_SETTINGSCORE_H
#define OKULAR_SETTINGSCORE_H

#include <core/okular_export.h>

#include <kconfigskeleton.h>
#include <kdebug.h>

#include <kuser.h>
namespace Okular {

class SettingsCorePrivate;

class OKULAR_EXPORT SettingsCore : public KConfigSkeleton
{
  public:
    class EnumMemoryLevel
    {
      public:
      enum type { Low, Normal, Aggressive, Greedy, COUNT };
    };
    class EnumTextAntialias
    {
      public:
      enum type { Disabled, Enabled, COUNT };
    };
    class EnumGraphicsAntialias
    {
      public:
      enum type { Disabled, Enabled, COUNT };
    };
    class EnumTextHinting
    {
      public:
      enum type { Disabled, Enabled, COUNT };
    };
    class EnumRenderMode
    {
      public:
      enum type { Inverted, Paper, Recolor, BlackWhite, COUNT };
    };
    class EnumExternalEditor
    {
      public:
      enum type { Custom, Kate, Kile, Scite, Emacsclient, Lyxclient, COUNT };
    };

    static SettingsCore *self();
    static void instance(const QString& cfgfilename);
    ~SettingsCore();

    /**
      Set MemoryLevel
    */
    static
    void setMemoryLevel( int v );

    /**
      Get MemoryLevel
    */
    static
    int memoryLevel();

    /**
      Set EnableThreading
    */
    static
    void setEnableThreading( bool v );

    /**
      Get EnableThreading
    */
    static
    bool enableThreading();

    /**
      Set TextAntialias
    */
    static
    void setTextAntialias( int v );

    /**
      Get TextAntialias
    */
    static
    int textAntialias();

    /**
      Set GraphicsAntialias
    */
    static
    void setGraphicsAntialias( int v );

    /**
      Get GraphicsAntialias
    */
    static
    int graphicsAntialias();

    /**
      Set TextHinting
    */
    static
    void setTextHinting( int v );

    /**
      Get TextHinting
    */
    static
    int textHinting();

    /**
      Set PaperColor
    */
    static
    void setPaperColor( const QColor & v );

    /**
      Get PaperColor
    */
    static
    QColor paperColor();

    /**
      Set ChangeColors
    */
    static
    void setChangeColors( bool v );

    /**
      Get ChangeColors
    */
    static
    bool changeColors();

    /**
      Set RenderMode
    */
    static
    void setRenderMode( int v );

    /**
      Get RenderMode
    */
    static
    int renderMode();

    /**
      Set ObeyDRM
    */
    static
    void setObeyDRM( bool v );

    /**
      Get ObeyDRM
    */
    static
    bool obeyDRM();

    /**
      Set ChooseGenerators
    */
    static
    void setChooseGenerators( bool v );

    /**
      Get ChooseGenerators
    */
    static
    bool chooseGenerators();

    /**
      Set ExternalEditor
    */
    static
    void setExternalEditor( int v );

    /**
      Get ExternalEditor
    */
    static
    int externalEditor();

    /**
      Set ExternalEditorCommand
    */
    static
    void setExternalEditorCommand( const QString & v );

    /**
      Get ExternalEditorCommand
    */
    static
    QString externalEditorCommand();

    /**
      Set SlidesAdvance
    */
    static
    void setSlidesAdvance( bool v );

    /**
      Get SlidesAdvance
    */
    static
    bool slidesAdvance();

    /**
      Set SlidesAdvanceTime
    */
    static
    void setSlidesAdvanceTime( uint v );

    /**
      Get SlidesAdvanceTime
    */
    static
    uint slidesAdvanceTime();

    /**
      Set SlidesLoop
    */
    static
    void setSlidesLoop( bool v );

    /**
      Get SlidesLoop
    */
    static
    bool slidesLoop();

  protected:
    SettingsCore(const QString& arg);
    friend class SettingsCoreHelper;

  private:
    SettingsCorePrivate *d;
};

}

#endif

