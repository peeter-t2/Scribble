// This file is generated by kconfig_compiler from okular.kcfg.
// All changes you do to this file will be lost.
#ifndef OKULAR_SETTINGS_H
#define OKULAR_SETTINGS_H

#include <settings_core.h>

#include <kconfigskeleton.h>
#include <kdebug.h>

#include <kuser.h>
namespace Okular {

class SettingsPrivate;

class Settings : public SettingsCore
{
  public:
    class EnumDisplayDocumentNameOrPath
    {
      public:
      enum type { Name, Path, COUNT };
    };
    class EnumSlidesTransition
    {
      public:
      enum type { BlindsHorizontal, BlindsVertical, BoxIn, BoxOut, Dissolve, GlitterDown, GlitterRight, GlitterRightDown, Random, Replace, SplitHorizontalIn, SplitHorizontalOut, SplitVerticalIn, SplitVerticalOut, WipeDown, WipeRight, WipeLeft, WipeUp, COUNT };
    };
    class EnumSlidesCursor
    {
      public:
      enum type { HiddenDelay, Visible, Hidden, COUNT };
    };
    class EnumViewMode
    {
      public:
      enum type { Single, Facing, FacingFirstCentered, Summary, COUNT };
    };
    class EnumMouseMode
    {
      public:
      enum type { Browse, Zoom, RectSelect, TextSelect, TableSelect, COUNT };
    };

    static Settings *self();
    static void instance(const QString& cfgfilename);
    ~Settings();

    /**
      Set EnableCompositing
    */
    static
    void setEnableCompositing( bool v );

    /**
      Get EnableCompositing
    */
    static
    bool enableCompositing();

    /**
      Set DebugDrawBoundaries
    */
    static
    void setDebugDrawBoundaries( bool v );

    /**
      Get DebugDrawBoundaries
    */
    static
    bool debugDrawBoundaries();

    /**
      Set DebugDrawAnnotationRect
    */
    static
    void setDebugDrawAnnotationRect( bool v );

    /**
      Get DebugDrawAnnotationRect
    */
    static
    bool debugDrawAnnotationRect();

    /**
      Set ContentsSearchCaseSensitive
    */
    static
    void setContentsSearchCaseSensitive( bool v );

    /**
      Get ContentsSearchCaseSensitive
    */
    static
    bool contentsSearchCaseSensitive();

    /**
      Set ContentsSearchRegularExpression
    */
    static
    void setContentsSearchRegularExpression( bool v );

    /**
      Get ContentsSearchRegularExpression
    */
    static
    bool contentsSearchRegularExpression();

    /**
      Set ReviewsSearchCaseSensitive
    */
    static
    void setReviewsSearchCaseSensitive( bool v );

    /**
      Get ReviewsSearchCaseSensitive
    */
    static
    bool reviewsSearchCaseSensitive();

    /**
      Set ReviewsSearchRegularExpression
    */
    static
    void setReviewsSearchRegularExpression( bool v );

    /**
      Get ReviewsSearchRegularExpression
    */
    static
    bool reviewsSearchRegularExpression();

    /**
      Set AnnotationTools
    */
    static
    void setAnnotationTools( const QStringList & v );

    /**
      Get AnnotationTools
    */
    static
    QStringList annotationTools();

    /**
      Set ZoomMode
    */
    static
    void setZoomMode( uint v );

    /**
      Get ZoomMode
    */
    static
    uint zoomMode();

    /**
      Set ShowOSD
    */
    static
    void setShowOSD( bool v );

    /**
      Get ShowOSD
    */
    static
    bool showOSD();

    /**
      Set DisplayDocumentTitle
    */
    static
    void setDisplayDocumentTitle( bool v );

    /**
      Get DisplayDocumentTitle
    */
    static
    bool displayDocumentTitle();

    /**
      Set DisplayDocumentNameOrPath
    */
    static
    void setDisplayDocumentNameOrPath( int v );

    /**
      Get DisplayDocumentNameOrPath
    */
    static
    int displayDocumentNameOrPath();

    /**
      Set UseKTTSD
    */
    static
    void setUseKTTSD( bool v );

    /**
      Get UseKTTSD
    */
    static
    bool useKTTSD();

    /**
      Set WatchFile
    */
    static
    void setWatchFile( bool v );

    /**
      Get WatchFile
    */
    static
    bool watchFile();

    /**
      Set SlidesBackgroundColor
    */
    static
    void setSlidesBackgroundColor( const QColor & v );

    /**
      Get SlidesBackgroundColor
    */
    static
    QColor slidesBackgroundColor();

    /**
      Set SlidesTransition
    */
    static
    void setSlidesTransition( int v );

    /**
      Get SlidesTransition
    */
    static
    int slidesTransition();

    /**
      Set SlidesCursor
    */
    static
    void setSlidesCursor( int v );

    /**
      Get SlidesCursor
    */
    static
    int slidesCursor();

    /**
      Set SlidesShowProgress
    */
    static
    void setSlidesShowProgress( bool v );

    /**
      Get SlidesShowProgress
    */
    static
    bool slidesShowProgress();

    /**
      Set SlidesShowSummary
    */
    static
    void setSlidesShowSummary( bool v );

    /**
      Get SlidesShowSummary
    */
    static
    bool slidesShowSummary();

    /**
      Set SlidesPencilColor
    */
    static
    void setSlidesPencilColor( const QColor & v );

    /**
      Get SlidesPencilColor
    */
    static
    QColor slidesPencilColor();

    /**
      Set SlidesTransitionsEnabled
    */
    static
    void setSlidesTransitionsEnabled( bool v );

    /**
      Get SlidesTransitionsEnabled
    */
    static
    bool slidesTransitionsEnabled();

    /**
      Set SlidesScreen
    */
    static
    void setSlidesScreen( int v );

    /**
      Get SlidesScreen
    */
    static
    int slidesScreen();

    /**
      Set ShowLeftPanel
    */
    static
    void setShowLeftPanel( bool v );

    /**
      Get ShowLeftPanel
    */
    static
    bool showLeftPanel();

    /**
      Set SplitterSizes
    */
    static
    void setSplitterSizes( const QList<int> & v );

    /**
      Get SplitterSizes
    */
    static
    QList<int> splitterSizes();

    /**
      Set ShowBottomBar
    */
    static
    void setShowBottomBar( bool v );

    /**
      Get ShowBottomBar
    */
    static
    bool showBottomBar();

    /**
      Set CurrentPageOnly
    */
    static
    void setCurrentPageOnly( bool v );

    /**
      Get CurrentPageOnly
    */
    static
    bool currentPageOnly();

    /**
      Set GroupByAuthor
    */
    static
    void setGroupByAuthor( bool v );

    /**
      Get GroupByAuthor
    */
    static
    bool groupByAuthor();

    /**
      Set GroupByPage
    */
    static
    void setGroupByPage( bool v );

    /**
      Get GroupByPage
    */
    static
    bool groupByPage();

    /**
      Set FilterBookmarks
    */
    static
    void setFilterBookmarks( bool v );

    /**
      Get FilterBookmarks
    */
    static
    bool filterBookmarks();

    /**
      Set SyncThumbnailsViewport
    */
    static
    void setSyncThumbnailsViewport( bool v );

    /**
      Get SyncThumbnailsViewport
    */
    static
    bool syncThumbnailsViewport();

    /**
      Set TocPageColumn
    */
    static
    void setTocPageColumn( bool v );

    /**
      Get TocPageColumn
    */
    static
    bool tocPageColumn();

    /**
      Set SidebarShowText
    */
    static
    void setSidebarShowText( bool v );

    /**
      Get SidebarShowText
    */
    static
    bool sidebarShowText();

    /**
      Set SidebarIconSize
    */
    static
    void setSidebarIconSize( uint v );

    /**
      Get SidebarIconSize
    */
    static
    uint sidebarIconSize();

    /**
      Set EditToolBarPlacement
    */
    static
    void setEditToolBarPlacement( int v );

    /**
      Get EditToolBarPlacement
    */
    static
    int editToolBarPlacement();

    /**
      Set ShowScrollBars
    */
    static
    void setShowScrollBars( bool v );

    /**
      Get ShowScrollBars
    */
    static
    bool showScrollBars();

    /**
      Set ScrollOverlap
    */
    static
    void setScrollOverlap( uint v );

    /**
      Get ScrollOverlap
    */
    static
    uint scrollOverlap();

    /**
      Set ViewColumns
    */
    static
    void setViewColumns( uint v );

    /**
      Get ViewColumns
    */
    static
    uint viewColumns();

    /**
      Set TrimMargins
    */
    static
    void setTrimMargins( bool v );

    /**
      Get TrimMargins
    */
    static
    bool trimMargins();

    /**
      Set ViewContinuous
    */
    static
    void setViewContinuous( bool v );

    /**
      Get ViewContinuous
    */
    static
    bool viewContinuous();

    /**
      Set ViewMode
    */
    static
    void setViewMode( int v );

    /**
      Get ViewMode
    */
    static
    int viewMode();

    /**
      Set MouseMode
    */
    static
    void setMouseMode( int v );

    /**
      Get MouseMode
    */
    static
    int mouseMode();

    /**
      Set ShowSourceLocationsGraphically
    */
    static
    void setShowSourceLocationsGraphically( bool v );

    /**
      Get ShowSourceLocationsGraphically
    */
    static
    bool showSourceLocationsGraphically();

    /**
      Set SearchCaseSensitive
    */
    static
    void setSearchCaseSensitive( bool v );

    /**
      Get SearchCaseSensitive
    */
    static
    bool searchCaseSensitive();

    /**
      Set SearchFromCurrentPage
    */
    static
    void setSearchFromCurrentPage( bool v );

    /**
      Get SearchFromCurrentPage
    */
    static
    bool searchFromCurrentPage();

    /**
      Set HighlightImages
    */
    static
    void setHighlightImages( bool v );

    /**
      Get HighlightImages
    */
    static
    bool highlightImages();

    /**
      Set HighlightLinks
    */
    static
    void setHighlightLinks( bool v );

    /**
      Get HighlightLinks
    */
    static
    bool highlightLinks();

    /**
      Set RecolorForeground
    */
    static
    void setRecolorForeground( const QColor & v );

    /**
      Get RecolorForeground
    */
    static
    QColor recolorForeground();

    /**
      Set RecolorBackground
    */
    static
    void setRecolorBackground( const QColor & v );

    /**
      Get RecolorBackground
    */
    static
    QColor recolorBackground();

    /**
      Set BWThreshold
    */
    static
    void setBWThreshold( uint v );

    /**
      Get BWThreshold
    */
    static
    uint bWThreshold();

    /**
      Set BWContrast
    */
    static
    void setBWContrast( uint v );

    /**
      Get BWContrast
    */
    static
    uint bWContrast();

    /**
      Set IdentityAuthor
    */
    static
    void setIdentityAuthor( const QString & v );

    /**
      Get IdentityAuthor
    */
    static
    QString identityAuthor();

  protected:
    Settings(const QString& arg);
    friend class SettingsHelper;

  private:
    SettingsPrivate *d;
};

}

#endif
