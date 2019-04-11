#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MDRecordApi.h"
#import "MDAssetAudioComposite.h"
#import "MDAssetBGMAudioComposite.h"
#import "MDAssetCutter.h"
#import "MDAssetGetAudioTracks.h"
#import "MDAssetOperationDecorator.h"
#import "MDAssetPassthrough.h"
#import "MDAssetProcessProtocol.h"
#import "MDAssetRepeat.h"
#import "MDAssetScale.h"
#import "MDAssetVideoTransform.h"
#import "MDRecordARVideoCamera.h"
#import "MDRecordCamera.h"
#import "MDRecordCameraAdapter.h"
#import "MDRecordAESCrypt.h"
#import "MDRecordRSA.h"
#import "NSData+MDRecordBase64.h"
#import "NSData+MDRecordCommonCrypto.h"
#import "NSString+MDRecordBase64.h"
#import "MDBarenessDetectorContext.h"
#import "MDBodyDetectorContext.h"
#import "MDCoreMLBodyDetectorContext.h"
#import "MDDetectorResult.h"
#import "MDFaceDetectorContext.h"
#import "MDFaceRigV2DetectorContext.h"
#import "MDFacialExpressionDetectorContext.h"
#import "MDFeatureOptions.h"
#import "MDHandGestureDetectorContext.h"
#import "MDImageDetectorOptions.h"
#import "MDImageDetectorProtocol.h"
#import "MDImageSegmenterContext.h"
#import "MDObjectDetectorContext.h"
#import "MDRecordDetectorCreator.h"
#import "MDRecordDetectorProxy.h"
#import "MDFastMP4Handler.h"
#import "MP4Fast.h"
#import "MDBBGPUImageSlidingFilter.h"
#import "MDGPUImageMediaEditorPreviewFilter.h"
#import "MDRecordColorDazzledFilter.h"
#import "MDRecordColorPackingFilter.h"
#import "MDRecordGraffitiEffectFilter.h"
#import "MDRecordLayerRenderFilter.h"
#import "MDRecordMirrImageFrameFilter.h"
#import "MDRecordOverlayFilter.h"
#import "MDRecordRainWindowFilter.h"
#import "MDRecordShakeFilter.h"
#import "MDRecordSlidingFilter.h"
#import "MDRecordSoulOutFilter.h"
#import "MDRecordTVArtifactFilter.h"
#import "SplitPersonFilter.h"
#import "SplitPersonVerticalFilter.h"
#import "WaterReflectionFilter.h"
#import "MDError.h"
#import "MDMediaEditorContext.h"
#import "MDProcessImageProtocol.h"
#import "MDRecordCallbackMessage.h"
#import "MDRecordDetectorPreloader.h"
#import "MDRecordFilter.h"
#import "MDRecordManager.h"
#import "MDRecordUtils.h"
#import "MDDeviceMotionObserver.h"
#import "MDImageBlender.h"
#import "MDRecordAuthorization.h"
#import "MDRecordDeviceType.h"
#import "MDRecordPlatformUtils.h"
#import "MDRenderContext.h"
#import "NSData+MDMD5Hash.h"
#import "NSString+MDMD5Hash.h"
#import "PHPhotoLibrary+MDSaveAsset.h"
#import "UIImage+MDConversion.h"
#import "UIView+MDSnapshot.h"
#import "MDAssetExportOperation.h"
#import "MDCancellable.h"
#import "MDRecordExportProgressUpdater.h"
#import "MDVideoCompositeExport.h"
#import "MDVideoExport.h"
#import "MDVideoExportProtocol.h"
#import "MDRecordAssetReversedManager.h"
#import "MDRecordAssetReverseOperation.h"
#import "MDRecordAssetReverserSession.h"
#import "MDRecordVideoSegment.h"
#import "MDAssetWriter.h"
#import "MDRecordReachability.h"
#import "MDCameraVideoRecording.h"
#import "MDCameraVideoSegmentsManager.h"
#import "MDRecordSpeedVaryDocument.h"
#import "MDCameraDetectorPipline.h"
#import "MDCameraEditorContext.h"
#import "MDCameraRenderFilter.h"
#import "MDCameraRenderPipline.h"
#import "MDRecordingAdapter.h"
#import "MDRecordDetectorManger.h"
#import "MDRecordFaceDetectorHelper.h"
#import "MDRecordResourceDownloader.h"
#import "MDRecordResourceItem.h"
#import "MDImageEditorAdapter.h"
#import "MDImageEditorContext.h"
#import "MDImageRenderPipline.h"
#import "MDPhotoDetectorPipline.h"
#import "MDPhotoRenderFilter.h"
#import "MDAssetPorcessBuilder.h"
#import "MDVideoAssetProcessBuilder.h"
#import "MDVideoDetectorPipline.h"
#import "MDVideoEditorAdapter.h"
#import "MDVideoEditorContext.h"
#import "MDVideoRenderFilter.h"
#import "MDVideoRenderPipline.h"
#import "MDRecordMirrImageFrameFilter+MDFilterLifeStyle.h"
#import "MDRecordPiplineManager.h"
#import "MDRecordPiplineSpecificFilterGroup.h"
#import "MDRecordRainWindowFilter+MDFilterLifeStyle.h"
#import "MDRecordShakeFilter+MDFilterLifeStyle.h"
#import "MDRecordSoulOutFilter+MDFilterLifeStyle.h"
#import "MDRecordSpecialEffectPassthroughFilter.h"
#import "MDRecordTVArtifactFilter+MDFilterLifeStyle.h"
#import "MDRSpecialFilterLifeStyleProtocol.h"
#import "MDRecordDynamicSticker.h"
#import "MDRecordPlayerViewController.h"
#import "MDRecordVideoFilterPlugin.h"

FOUNDATION_EXPORT double RecordSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char RecordSDKVersionString[];

