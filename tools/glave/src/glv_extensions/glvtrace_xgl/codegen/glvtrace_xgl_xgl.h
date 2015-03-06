/* THIS FILE IS GENERATED.  DO NOT EDIT. */

/*
 * XGL
 *
 * Copyright (C) 2014 LunarG, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include "glv_vk_vk_structs.h"
#include "glv_vk_packet_id.h"

void AttachHooks();
void DetachHooks();
void InitTracer(void);


// Pointers to real functions and declarations of hooked functions
#ifdef WIN32
extern INIT_ONCE gInitOnce;
#define __HOOKED_xglCreateInstance hooked_xglCreateInstance
#define __HOOKED_xglDestroyInstance hooked_xglDestroyInstance
#define __HOOKED_xglEnumerateGpus hooked_xglEnumerateGpus
#define __HOOKED_xglGetGpuInfo hooked_xglGetGpuInfo
#define __HOOKED_xglGetProcAddr hooked_xglGetProcAddr
#define __HOOKED_xglCreateDevice hooked_xglCreateDevice
#define __HOOKED_xglDestroyDevice hooked_xglDestroyDevice
#define __HOOKED_xglGetExtensionSupport hooked_xglGetExtensionSupport
#define __HOOKED_xglEnumerateLayers hooked_xglEnumerateLayers
#define __HOOKED_xglGetDeviceQueue hooked_xglGetDeviceQueue
#define __HOOKED_xglQueueSubmit hooked_xglQueueSubmit
#define __HOOKED_xglQueueSetGlobalMemReferences hooked_xglQueueSetGlobalMemReferences
#define __HOOKED_xglQueueWaitIdle hooked_xglQueueWaitIdle
#define __HOOKED_xglDeviceWaitIdle hooked_xglDeviceWaitIdle
#define __HOOKED_xglAllocMemory hooked_xglAllocMemory
#define __HOOKED_xglFreeMemory hooked_xglFreeMemory
#define __HOOKED_xglSetMemoryPriority hooked_xglSetMemoryPriority
#define __HOOKED_xglMapMemory hooked_xglMapMemory
#define __HOOKED_xglUnmapMemory hooked_xglUnmapMemory
#define __HOOKED_xglPinSystemMemory hooked_xglPinSystemMemory
#define __HOOKED_xglGetMultiGpuCompatibility hooked_xglGetMultiGpuCompatibility
#define __HOOKED_xglOpenSharedMemory hooked_xglOpenSharedMemory
#define __HOOKED_xglOpenSharedQueueSemaphore hooked_xglOpenSharedQueueSemaphore
#define __HOOKED_xglOpenPeerMemory hooked_xglOpenPeerMemory
#define __HOOKED_xglOpenPeerImage hooked_xglOpenPeerImage
#define __HOOKED_xglDestroyObject hooked_xglDestroyObject
#define __HOOKED_xglGetObjectInfo hooked_xglGetObjectInfo
#define __HOOKED_xglBindObjectMemory hooked_xglBindObjectMemory
#define __HOOKED_xglBindObjectMemoryRange hooked_xglBindObjectMemoryRange
#define __HOOKED_xglBindImageMemoryRange hooked_xglBindImageMemoryRange
#define __HOOKED_xglCreateFence hooked_xglCreateFence
#define __HOOKED_xglGetFenceStatus hooked_xglGetFenceStatus
#define __HOOKED_xglWaitForFences hooked_xglWaitForFences
#define __HOOKED_xglCreateQueueSemaphore hooked_xglCreateQueueSemaphore
#define __HOOKED_xglSignalQueueSemaphore hooked_xglSignalQueueSemaphore
#define __HOOKED_xglWaitQueueSemaphore hooked_xglWaitQueueSemaphore
#define __HOOKED_xglCreateEvent hooked_xglCreateEvent
#define __HOOKED_xglGetEventStatus hooked_xglGetEventStatus
#define __HOOKED_xglSetEvent hooked_xglSetEvent
#define __HOOKED_xglResetEvent hooked_xglResetEvent
#define __HOOKED_xglCreateQueryPool hooked_xglCreateQueryPool
#define __HOOKED_xglGetQueryPoolResults hooked_xglGetQueryPoolResults
#define __HOOKED_xglGetFormatInfo hooked_xglGetFormatInfo
#define __HOOKED_xglCreateBuffer hooked_xglCreateBuffer
#define __HOOKED_xglCreateBufferView hooked_xglCreateBufferView
#define __HOOKED_xglCreateImage hooked_xglCreateImage
#define __HOOKED_xglSetFastClearColor hooked_xglSetFastClearColor
#define __HOOKED_xglSetFastClearDepth hooked_xglSetFastClearDepth
#define __HOOKED_xglGetImageSubresourceInfo hooked_xglGetImageSubresourceInfo
#define __HOOKED_xglCreateImageView hooked_xglCreateImageView
#define __HOOKED_xglCreateColorAttachmentView hooked_xglCreateColorAttachmentView
#define __HOOKED_xglCreateDepthStencilView hooked_xglCreateDepthStencilView
#define __HOOKED_xglCreateShader hooked_xglCreateShader
#define __HOOKED_xglCreateGraphicsPipeline hooked_xglCreateGraphicsPipeline
#define __HOOKED_xglCreateComputePipeline hooked_xglCreateComputePipeline
#define __HOOKED_xglStorePipeline hooked_xglStorePipeline
#define __HOOKED_xglLoadPipeline hooked_xglLoadPipeline
#define __HOOKED_xglCreatePipelineDelta hooked_xglCreatePipelineDelta
#define __HOOKED_xglCreateSampler hooked_xglCreateSampler
#define __HOOKED_xglCreateDescriptorSetLayout hooked_xglCreateDescriptorSetLayout
#define __HOOKED_xglBeginDescriptorRegionUpdate hooked_xglBeginDescriptorRegionUpdate
#define __HOOKED_xglEndDescriptorRegionUpdate hooked_xglEndDescriptorRegionUpdate
#define __HOOKED_xglCreateDescriptorRegion hooked_xglCreateDescriptorRegion
#define __HOOKED_xglClearDescriptorRegion hooked_xglClearDescriptorRegion
#define __HOOKED_xglAllocDescriptorSets hooked_xglAllocDescriptorSets
#define __HOOKED_xglClearDescriptorSets hooked_xglClearDescriptorSets
#define __HOOKED_xglUpdateDescriptors hooked_xglUpdateDescriptors
#define __HOOKED_xglCreateDynamicViewportState hooked_xglCreateDynamicViewportState
#define __HOOKED_xglCreateDynamicRasterState hooked_xglCreateDynamicRasterState
#define __HOOKED_xglCreateDynamicColorBlendState hooked_xglCreateDynamicColorBlendState
#define __HOOKED_xglCreateDynamicDepthStencilState hooked_xglCreateDynamicDepthStencilState
#define __HOOKED_xglCreateCommandBuffer hooked_xglCreateCommandBuffer
#define __HOOKED_xglBeginCommandBuffer hooked_xglBeginCommandBuffer
#define __HOOKED_xglEndCommandBuffer hooked_xglEndCommandBuffer
#define __HOOKED_xglResetCommandBuffer hooked_xglResetCommandBuffer
#define __HOOKED_xglCmdBindPipeline hooked_xglCmdBindPipeline
#define __HOOKED_xglCmdBindPipelineDelta hooked_xglCmdBindPipelineDelta
#define __HOOKED_xglCmdBindDynamicStateObject hooked_xglCmdBindDynamicStateObject
#define __HOOKED_xglCmdBindDescriptorSet hooked_xglCmdBindDescriptorSet
#define __HOOKED_xglCmdBindVertexBuffer hooked_xglCmdBindVertexBuffer
#define __HOOKED_xglCmdBindIndexBuffer hooked_xglCmdBindIndexBuffer
#define __HOOKED_xglCmdDraw hooked_xglCmdDraw
#define __HOOKED_xglCmdDrawIndexed hooked_xglCmdDrawIndexed
#define __HOOKED_xglCmdDrawIndirect hooked_xglCmdDrawIndirect
#define __HOOKED_xglCmdDrawIndexedIndirect hooked_xglCmdDrawIndexedIndirect
#define __HOOKED_xglCmdDispatch hooked_xglCmdDispatch
#define __HOOKED_xglCmdDispatchIndirect hooked_xglCmdDispatchIndirect
#define __HOOKED_xglCmdCopyBuffer hooked_xglCmdCopyBuffer
#define __HOOKED_xglCmdCopyImage hooked_xglCmdCopyImage
#define __HOOKED_xglCmdCopyBufferToImage hooked_xglCmdCopyBufferToImage
#define __HOOKED_xglCmdCopyImageToBuffer hooked_xglCmdCopyImageToBuffer
#define __HOOKED_xglCmdCloneImageData hooked_xglCmdCloneImageData
#define __HOOKED_xglCmdUpdateBuffer hooked_xglCmdUpdateBuffer
#define __HOOKED_xglCmdFillBuffer hooked_xglCmdFillBuffer
#define __HOOKED_xglCmdClearColorImage hooked_xglCmdClearColorImage
#define __HOOKED_xglCmdClearColorImageRaw hooked_xglCmdClearColorImageRaw
#define __HOOKED_xglCmdClearDepthStencil hooked_xglCmdClearDepthStencil
#define __HOOKED_xglCmdResolveImage hooked_xglCmdResolveImage
#define __HOOKED_xglCmdSetEvent hooked_xglCmdSetEvent
#define __HOOKED_xglCmdResetEvent hooked_xglCmdResetEvent
#define __HOOKED_xglCmdWaitEvents hooked_xglCmdWaitEvents
#define __HOOKED_xglCmdPipelineBarrier hooked_xglCmdPipelineBarrier
#define __HOOKED_xglCmdBeginQuery hooked_xglCmdBeginQuery
#define __HOOKED_xglCmdEndQuery hooked_xglCmdEndQuery
#define __HOOKED_xglCmdResetQueryPool hooked_xglCmdResetQueryPool
#define __HOOKED_xglCmdWriteTimestamp hooked_xglCmdWriteTimestamp
#define __HOOKED_xglCmdInitAtomicCounters hooked_xglCmdInitAtomicCounters
#define __HOOKED_xglCmdLoadAtomicCounters hooked_xglCmdLoadAtomicCounters
#define __HOOKED_xglCmdSaveAtomicCounters hooked_xglCmdSaveAtomicCounters
#define __HOOKED_xglCreateFramebuffer hooked_xglCreateFramebuffer
#define __HOOKED_xglCreateRenderPass hooked_xglCreateRenderPass
#define __HOOKED_xglCmdBeginRenderPass hooked_xglCmdBeginRenderPass
#define __HOOKED_xglCmdEndRenderPass hooked_xglCmdEndRenderPass

#elif defined(PLATFORM_LINUX)
extern pthread_once_t gInitOnce;
#define __HOOKED_xglCreateInstance xglCreateInstance
#define __HOOKED_xglDestroyInstance xglDestroyInstance
#define __HOOKED_xglEnumerateGpus xglEnumerateGpus
#define __HOOKED_xglGetGpuInfo xglGetGpuInfo
#define __HOOKED_xglGetProcAddr xglGetProcAddr
#define __HOOKED_xglCreateDevice xglCreateDevice
#define __HOOKED_xglDestroyDevice xglDestroyDevice
#define __HOOKED_xglGetExtensionSupport xglGetExtensionSupport
#define __HOOKED_xglEnumerateLayers xglEnumerateLayers
#define __HOOKED_xglGetDeviceQueue xglGetDeviceQueue
#define __HOOKED_xglQueueSubmit xglQueueSubmit
#define __HOOKED_xglQueueSetGlobalMemReferences xglQueueSetGlobalMemReferences
#define __HOOKED_xglQueueWaitIdle xglQueueWaitIdle
#define __HOOKED_xglDeviceWaitIdle xglDeviceWaitIdle
#define __HOOKED_xglAllocMemory xglAllocMemory
#define __HOOKED_xglFreeMemory xglFreeMemory
#define __HOOKED_xglSetMemoryPriority xglSetMemoryPriority
#define __HOOKED_xglMapMemory xglMapMemory
#define __HOOKED_xglUnmapMemory xglUnmapMemory
#define __HOOKED_xglPinSystemMemory xglPinSystemMemory
#define __HOOKED_xglGetMultiGpuCompatibility xglGetMultiGpuCompatibility
#define __HOOKED_xglOpenSharedMemory xglOpenSharedMemory
#define __HOOKED_xglOpenSharedQueueSemaphore xglOpenSharedQueueSemaphore
#define __HOOKED_xglOpenPeerMemory xglOpenPeerMemory
#define __HOOKED_xglOpenPeerImage xglOpenPeerImage
#define __HOOKED_xglDestroyObject xglDestroyObject
#define __HOOKED_xglGetObjectInfo xglGetObjectInfo
#define __HOOKED_xglBindObjectMemory xglBindObjectMemory
#define __HOOKED_xglBindObjectMemoryRange xglBindObjectMemoryRange
#define __HOOKED_xglBindImageMemoryRange xglBindImageMemoryRange
#define __HOOKED_xglCreateFence xglCreateFence
#define __HOOKED_xglGetFenceStatus xglGetFenceStatus
#define __HOOKED_xglWaitForFences xglWaitForFences
#define __HOOKED_xglCreateQueueSemaphore xglCreateQueueSemaphore
#define __HOOKED_xglSignalQueueSemaphore xglSignalQueueSemaphore
#define __HOOKED_xglWaitQueueSemaphore xglWaitQueueSemaphore
#define __HOOKED_xglCreateEvent xglCreateEvent
#define __HOOKED_xglGetEventStatus xglGetEventStatus
#define __HOOKED_xglSetEvent xglSetEvent
#define __HOOKED_xglResetEvent xglResetEvent
#define __HOOKED_xglCreateQueryPool xglCreateQueryPool
#define __HOOKED_xglGetQueryPoolResults xglGetQueryPoolResults
#define __HOOKED_xglGetFormatInfo xglGetFormatInfo
#define __HOOKED_xglCreateBuffer xglCreateBuffer
#define __HOOKED_xglCreateBufferView xglCreateBufferView
#define __HOOKED_xglCreateImage xglCreateImage
#define __HOOKED_xglSetFastClearColor xglSetFastClearColor
#define __HOOKED_xglSetFastClearDepth xglSetFastClearDepth
#define __HOOKED_xglGetImageSubresourceInfo xglGetImageSubresourceInfo
#define __HOOKED_xglCreateImageView xglCreateImageView
#define __HOOKED_xglCreateColorAttachmentView xglCreateColorAttachmentView
#define __HOOKED_xglCreateDepthStencilView xglCreateDepthStencilView
#define __HOOKED_xglCreateShader xglCreateShader
#define __HOOKED_xglCreateGraphicsPipeline xglCreateGraphicsPipeline
#define __HOOKED_xglCreateComputePipeline xglCreateComputePipeline
#define __HOOKED_xglStorePipeline xglStorePipeline
#define __HOOKED_xglLoadPipeline xglLoadPipeline
#define __HOOKED_xglCreatePipelineDelta xglCreatePipelineDelta
#define __HOOKED_xglCreateSampler xglCreateSampler
#define __HOOKED_xglCreateDescriptorSetLayout xglCreateDescriptorSetLayout
#define __HOOKED_xglBeginDescriptorRegionUpdate xglBeginDescriptorRegionUpdate
#define __HOOKED_xglEndDescriptorRegionUpdate xglEndDescriptorRegionUpdate
#define __HOOKED_xglCreateDescriptorRegion xglCreateDescriptorRegion
#define __HOOKED_xglClearDescriptorRegion xglClearDescriptorRegion
#define __HOOKED_xglAllocDescriptorSets xglAllocDescriptorSets
#define __HOOKED_xglClearDescriptorSets xglClearDescriptorSets
#define __HOOKED_xglUpdateDescriptors xglUpdateDescriptors
#define __HOOKED_xglCreateDynamicViewportState xglCreateDynamicViewportState
#define __HOOKED_xglCreateDynamicRasterState xglCreateDynamicRasterState
#define __HOOKED_xglCreateDynamicColorBlendState xglCreateDynamicColorBlendState
#define __HOOKED_xglCreateDynamicDepthStencilState xglCreateDynamicDepthStencilState
#define __HOOKED_xglCreateCommandBuffer xglCreateCommandBuffer
#define __HOOKED_xglBeginCommandBuffer xglBeginCommandBuffer
#define __HOOKED_xglEndCommandBuffer xglEndCommandBuffer
#define __HOOKED_xglResetCommandBuffer xglResetCommandBuffer
#define __HOOKED_xglCmdBindPipeline xglCmdBindPipeline
#define __HOOKED_xglCmdBindPipelineDelta xglCmdBindPipelineDelta
#define __HOOKED_xglCmdBindDynamicStateObject xglCmdBindDynamicStateObject
#define __HOOKED_xglCmdBindDescriptorSet xglCmdBindDescriptorSet
#define __HOOKED_xglCmdBindVertexBuffer xglCmdBindVertexBuffer
#define __HOOKED_xglCmdBindIndexBuffer xglCmdBindIndexBuffer
#define __HOOKED_xglCmdDraw xglCmdDraw
#define __HOOKED_xglCmdDrawIndexed xglCmdDrawIndexed
#define __HOOKED_xglCmdDrawIndirect xglCmdDrawIndirect
#define __HOOKED_xglCmdDrawIndexedIndirect xglCmdDrawIndexedIndirect
#define __HOOKED_xglCmdDispatch xglCmdDispatch
#define __HOOKED_xglCmdDispatchIndirect xglCmdDispatchIndirect
#define __HOOKED_xglCmdCopyBuffer xglCmdCopyBuffer
#define __HOOKED_xglCmdCopyImage xglCmdCopyImage
#define __HOOKED_xglCmdCopyBufferToImage xglCmdCopyBufferToImage
#define __HOOKED_xglCmdCopyImageToBuffer xglCmdCopyImageToBuffer
#define __HOOKED_xglCmdCloneImageData xglCmdCloneImageData
#define __HOOKED_xglCmdUpdateBuffer xglCmdUpdateBuffer
#define __HOOKED_xglCmdFillBuffer xglCmdFillBuffer
#define __HOOKED_xglCmdClearColorImage xglCmdClearColorImage
#define __HOOKED_xglCmdClearColorImageRaw xglCmdClearColorImageRaw
#define __HOOKED_xglCmdClearDepthStencil xglCmdClearDepthStencil
#define __HOOKED_xglCmdResolveImage xglCmdResolveImage
#define __HOOKED_xglCmdSetEvent xglCmdSetEvent
#define __HOOKED_xglCmdResetEvent xglCmdResetEvent
#define __HOOKED_xglCmdWaitEvents xglCmdWaitEvents
#define __HOOKED_xglCmdPipelineBarrier xglCmdPipelineBarrier
#define __HOOKED_xglCmdBeginQuery xglCmdBeginQuery
#define __HOOKED_xglCmdEndQuery xglCmdEndQuery
#define __HOOKED_xglCmdResetQueryPool xglCmdResetQueryPool
#define __HOOKED_xglCmdWriteTimestamp xglCmdWriteTimestamp
#define __HOOKED_xglCmdInitAtomicCounters xglCmdInitAtomicCounters
#define __HOOKED_xglCmdLoadAtomicCounters xglCmdLoadAtomicCounters
#define __HOOKED_xglCmdSaveAtomicCounters xglCmdSaveAtomicCounters
#define __HOOKED_xglCreateFramebuffer xglCreateFramebuffer
#define __HOOKED_xglCreateRenderPass xglCreateRenderPass
#define __HOOKED_xglCmdBeginRenderPass xglCmdBeginRenderPass
#define __HOOKED_xglCmdEndRenderPass xglCmdEndRenderPass
#endif

// Hooked function prototypes

GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateInstance(const XGL_APPLICATION_INFO* pAppInfo, const XGL_ALLOC_CALLBACKS* pAllocCb, XGL_INSTANCE* pInstance);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglDestroyInstance(XGL_INSTANCE instance);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglEnumerateGpus(XGL_INSTANCE instance, uint32_t maxGpus, uint32_t* pGpuCount, XGL_PHYSICAL_GPU* pGpus);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglGetGpuInfo(XGL_PHYSICAL_GPU gpu, XGL_PHYSICAL_GPU_INFO_TYPE infoType, size_t* pDataSize, void* pData);
GLVTRACER_EXPORT void* XGLAPI __HOOKED_xglGetProcAddr(XGL_PHYSICAL_GPU gpu, const char* pName);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateDevice(XGL_PHYSICAL_GPU gpu, const XGL_DEVICE_CREATE_INFO* pCreateInfo, XGL_DEVICE* pDevice);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglDestroyDevice(XGL_DEVICE device);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglGetExtensionSupport(XGL_PHYSICAL_GPU gpu, const char* pExtName);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglEnumerateLayers(XGL_PHYSICAL_GPU gpu, size_t maxLayerCount, size_t maxStringSize, size_t* pOutLayerCount, char* const* pOutLayers, void* pReserved);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglGetDeviceQueue(XGL_DEVICE device, uint32_t queueNodeIndex, uint32_t queueIndex, XGL_QUEUE* pQueue);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglQueueSubmit(XGL_QUEUE queue, uint32_t cmdBufferCount, const XGL_CMD_BUFFER* pCmdBuffers, uint32_t memRefCount, const XGL_MEMORY_REF* pMemRefs, XGL_FENCE fence);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglQueueSetGlobalMemReferences(XGL_QUEUE queue, uint32_t memRefCount, const XGL_MEMORY_REF* pMemRefs);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglQueueWaitIdle(XGL_QUEUE queue);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglDeviceWaitIdle(XGL_DEVICE device);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglAllocMemory(XGL_DEVICE device, const XGL_MEMORY_ALLOC_INFO* pAllocInfo, XGL_GPU_MEMORY* pMem);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglFreeMemory(XGL_GPU_MEMORY mem);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglSetMemoryPriority(XGL_GPU_MEMORY mem, XGL_MEMORY_PRIORITY priority);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglMapMemory(XGL_GPU_MEMORY mem, XGL_FLAGS flags, void** ppData);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglUnmapMemory(XGL_GPU_MEMORY mem);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglPinSystemMemory(XGL_DEVICE device, const void* pSysMem, size_t memSize, XGL_GPU_MEMORY* pMem);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglGetMultiGpuCompatibility(XGL_PHYSICAL_GPU gpu0, XGL_PHYSICAL_GPU gpu1, XGL_GPU_COMPATIBILITY_INFO* pInfo);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglOpenSharedMemory(XGL_DEVICE device, const XGL_MEMORY_OPEN_INFO* pOpenInfo, XGL_GPU_MEMORY* pMem);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglOpenSharedQueueSemaphore(XGL_DEVICE device, const XGL_QUEUE_SEMAPHORE_OPEN_INFO* pOpenInfo, XGL_QUEUE_SEMAPHORE* pSemaphore);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglOpenPeerMemory(XGL_DEVICE device, const XGL_PEER_MEMORY_OPEN_INFO* pOpenInfo, XGL_GPU_MEMORY* pMem);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglOpenPeerImage(XGL_DEVICE device, const XGL_PEER_IMAGE_OPEN_INFO* pOpenInfo, XGL_IMAGE* pImage, XGL_GPU_MEMORY* pMem);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglDestroyObject(XGL_OBJECT object);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglGetObjectInfo(XGL_BASE_OBJECT object, XGL_OBJECT_INFO_TYPE infoType, size_t* pDataSize, void* pData);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglBindObjectMemory(XGL_OBJECT object, uint32_t allocationIdx, XGL_GPU_MEMORY mem, XGL_GPU_SIZE offset);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglBindObjectMemoryRange(XGL_OBJECT object, uint32_t allocationIdx, XGL_GPU_SIZE rangeOffset, XGL_GPU_SIZE rangeSize, XGL_GPU_MEMORY mem, XGL_GPU_SIZE memOffset);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglBindImageMemoryRange(XGL_IMAGE image, uint32_t allocationIdx, const XGL_IMAGE_MEMORY_BIND_INFO* bindInfo, XGL_GPU_MEMORY mem, XGL_GPU_SIZE memOffset);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateFence(XGL_DEVICE device, const XGL_FENCE_CREATE_INFO* pCreateInfo, XGL_FENCE* pFence);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglGetFenceStatus(XGL_FENCE fence);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglWaitForFences(XGL_DEVICE device, uint32_t fenceCount, const XGL_FENCE* pFences, bool32_t waitAll, uint64_t timeout);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateQueueSemaphore(XGL_DEVICE device, const XGL_QUEUE_SEMAPHORE_CREATE_INFO* pCreateInfo, XGL_QUEUE_SEMAPHORE* pSemaphore);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglSignalQueueSemaphore(XGL_QUEUE queue, XGL_QUEUE_SEMAPHORE semaphore);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglWaitQueueSemaphore(XGL_QUEUE queue, XGL_QUEUE_SEMAPHORE semaphore);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateEvent(XGL_DEVICE device, const XGL_EVENT_CREATE_INFO* pCreateInfo, XGL_EVENT* pEvent);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglGetEventStatus(XGL_EVENT event);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglSetEvent(XGL_EVENT event);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglResetEvent(XGL_EVENT event);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateQueryPool(XGL_DEVICE device, const XGL_QUERY_POOL_CREATE_INFO* pCreateInfo, XGL_QUERY_POOL* pQueryPool);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglGetQueryPoolResults(XGL_QUERY_POOL queryPool, uint32_t startQuery, uint32_t queryCount, size_t* pDataSize, void* pData);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglGetFormatInfo(XGL_DEVICE device, XGL_FORMAT format, XGL_FORMAT_INFO_TYPE infoType, size_t* pDataSize, void* pData);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateBuffer(XGL_DEVICE device, const XGL_BUFFER_CREATE_INFO* pCreateInfo, XGL_BUFFER* pBuffer);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateBufferView(XGL_DEVICE device, const XGL_BUFFER_VIEW_CREATE_INFO* pCreateInfo, XGL_BUFFER_VIEW* pView);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateImage(XGL_DEVICE device, const XGL_IMAGE_CREATE_INFO* pCreateInfo, XGL_IMAGE* pImage);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglSetFastClearColor(XGL_IMAGE image, const float color[4]);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglSetFastClearDepth(XGL_IMAGE image, float depth);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglGetImageSubresourceInfo(XGL_IMAGE image, const XGL_IMAGE_SUBRESOURCE* pSubresource, XGL_SUBRESOURCE_INFO_TYPE infoType, size_t* pDataSize, void* pData);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateImageView(XGL_DEVICE device, const XGL_IMAGE_VIEW_CREATE_INFO* pCreateInfo, XGL_IMAGE_VIEW* pView);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateColorAttachmentView(XGL_DEVICE device, const XGL_COLOR_ATTACHMENT_VIEW_CREATE_INFO* pCreateInfo, XGL_COLOR_ATTACHMENT_VIEW* pView);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateDepthStencilView(XGL_DEVICE device, const XGL_DEPTH_STENCIL_VIEW_CREATE_INFO* pCreateInfo, XGL_DEPTH_STENCIL_VIEW* pView);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateShader(XGL_DEVICE device, const XGL_SHADER_CREATE_INFO* pCreateInfo, XGL_SHADER* pShader);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateGraphicsPipeline(XGL_DEVICE device, const XGL_GRAPHICS_PIPELINE_CREATE_INFO* pCreateInfo, XGL_PIPELINE* pPipeline);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateComputePipeline(XGL_DEVICE device, const XGL_COMPUTE_PIPELINE_CREATE_INFO* pCreateInfo, XGL_PIPELINE* pPipeline);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglStorePipeline(XGL_PIPELINE pipeline, size_t* pDataSize, void* pData);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglLoadPipeline(XGL_DEVICE device, size_t dataSize, const void* pData, XGL_PIPELINE* pPipeline);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreatePipelineDelta(XGL_DEVICE device, XGL_PIPELINE p1, XGL_PIPELINE p2, XGL_PIPELINE_DELTA* delta);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateSampler(XGL_DEVICE device, const XGL_SAMPLER_CREATE_INFO* pCreateInfo, XGL_SAMPLER* pSampler);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateDescriptorSetLayout(XGL_DEVICE device, XGL_FLAGS stageFlags, const uint32_t* pSetBindPoints, XGL_DESCRIPTOR_SET_LAYOUT priorSetLayout, const XGL_DESCRIPTOR_SET_LAYOUT_CREATE_INFO* pSetLayoutInfoList, XGL_DESCRIPTOR_SET_LAYOUT* pSetLayout);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglBeginDescriptorRegionUpdate(XGL_DEVICE device, XGL_DESCRIPTOR_UPDATE_MODE updateMode);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglEndDescriptorRegionUpdate(XGL_DEVICE device, XGL_CMD_BUFFER cmd);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateDescriptorRegion(XGL_DEVICE device, XGL_DESCRIPTOR_REGION_USAGE regionUsage, uint32_t maxSets, const XGL_DESCRIPTOR_REGION_CREATE_INFO* pCreateInfo, XGL_DESCRIPTOR_REGION* pDescriptorRegion);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglClearDescriptorRegion(XGL_DESCRIPTOR_REGION descriptorRegion);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglAllocDescriptorSets(XGL_DESCRIPTOR_REGION descriptorRegion, XGL_DESCRIPTOR_SET_USAGE setUsage, uint32_t count, const XGL_DESCRIPTOR_SET_LAYOUT* pSetLayouts, XGL_DESCRIPTOR_SET* pDescriptorSets, uint32_t* pCount);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglClearDescriptorSets(XGL_DESCRIPTOR_REGION descriptorRegion, uint32_t count, const XGL_DESCRIPTOR_SET* pDescriptorSets);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglUpdateDescriptors(XGL_DESCRIPTOR_SET descriptorSet, const void* pUpdateChain);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateDynamicViewportState(XGL_DEVICE device, const XGL_DYNAMIC_VP_STATE_CREATE_INFO* pCreateInfo, XGL_DYNAMIC_VP_STATE_OBJECT* pState);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateDynamicRasterState(XGL_DEVICE device, const XGL_DYNAMIC_RS_STATE_CREATE_INFO* pCreateInfo, XGL_DYNAMIC_RS_STATE_OBJECT* pState);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateDynamicColorBlendState(XGL_DEVICE device, const XGL_DYNAMIC_CB_STATE_CREATE_INFO* pCreateInfo, XGL_DYNAMIC_CB_STATE_OBJECT* pState);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateDynamicDepthStencilState(XGL_DEVICE device, const XGL_DYNAMIC_DS_STATE_CREATE_INFO* pCreateInfo, XGL_DYNAMIC_DS_STATE_OBJECT* pState);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateCommandBuffer(XGL_DEVICE device, const XGL_CMD_BUFFER_CREATE_INFO* pCreateInfo, XGL_CMD_BUFFER* pCmdBuffer);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglBeginCommandBuffer(XGL_CMD_BUFFER cmdBuffer, const XGL_CMD_BUFFER_BEGIN_INFO* pBeginInfo);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglEndCommandBuffer(XGL_CMD_BUFFER cmdBuffer);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglResetCommandBuffer(XGL_CMD_BUFFER cmdBuffer);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdBindPipeline(XGL_CMD_BUFFER cmdBuffer, XGL_PIPELINE_BIND_POINT pipelineBindPoint, XGL_PIPELINE pipeline);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdBindPipelineDelta(XGL_CMD_BUFFER cmdBuffer, XGL_PIPELINE_BIND_POINT pipelineBindPoint, XGL_PIPELINE_DELTA delta);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdBindDynamicStateObject(XGL_CMD_BUFFER cmdBuffer, XGL_STATE_BIND_POINT stateBindPoint, XGL_DYNAMIC_STATE_OBJECT state);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdBindDescriptorSet(XGL_CMD_BUFFER cmdBuffer, XGL_PIPELINE_BIND_POINT pipelineBindPoint, XGL_DESCRIPTOR_SET descriptorSet, const uint32_t* pUserData);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdBindVertexBuffer(XGL_CMD_BUFFER cmdBuffer, XGL_BUFFER buffer, XGL_GPU_SIZE offset, uint32_t binding);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdBindIndexBuffer(XGL_CMD_BUFFER cmdBuffer, XGL_BUFFER buffer, XGL_GPU_SIZE offset, XGL_INDEX_TYPE indexType);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdDraw(XGL_CMD_BUFFER cmdBuffer, uint32_t firstVertex, uint32_t vertexCount, uint32_t firstInstance, uint32_t instanceCount);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdDrawIndexed(XGL_CMD_BUFFER cmdBuffer, uint32_t firstIndex, uint32_t indexCount, int32_t vertexOffset, uint32_t firstInstance, uint32_t instanceCount);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdDrawIndirect(XGL_CMD_BUFFER cmdBuffer, XGL_BUFFER buffer, XGL_GPU_SIZE offset, uint32_t count, uint32_t stride);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdDrawIndexedIndirect(XGL_CMD_BUFFER cmdBuffer, XGL_BUFFER buffer, XGL_GPU_SIZE offset, uint32_t count, uint32_t stride);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdDispatch(XGL_CMD_BUFFER cmdBuffer, uint32_t x, uint32_t y, uint32_t z);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdDispatchIndirect(XGL_CMD_BUFFER cmdBuffer, XGL_BUFFER buffer, XGL_GPU_SIZE offset);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdCopyBuffer(XGL_CMD_BUFFER cmdBuffer, XGL_BUFFER srcBuffer, XGL_BUFFER destBuffer, uint32_t regionCount, const XGL_BUFFER_COPY* pRegions);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdCopyImage(XGL_CMD_BUFFER cmdBuffer, XGL_IMAGE srcImage, XGL_IMAGE destImage, uint32_t regionCount, const XGL_IMAGE_COPY* pRegions);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdCopyBufferToImage(XGL_CMD_BUFFER cmdBuffer, XGL_BUFFER srcBuffer, XGL_IMAGE destImage, uint32_t regionCount, const XGL_BUFFER_IMAGE_COPY* pRegions);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdCopyImageToBuffer(XGL_CMD_BUFFER cmdBuffer, XGL_IMAGE srcImage, XGL_BUFFER destBuffer, uint32_t regionCount, const XGL_BUFFER_IMAGE_COPY* pRegions);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdCloneImageData(XGL_CMD_BUFFER cmdBuffer, XGL_IMAGE srcImage, XGL_IMAGE_LAYOUT srcImageLayout, XGL_IMAGE destImage, XGL_IMAGE_LAYOUT destImageLayout);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdUpdateBuffer(XGL_CMD_BUFFER cmdBuffer, XGL_BUFFER destBuffer, XGL_GPU_SIZE destOffset, XGL_GPU_SIZE dataSize, const uint32_t* pData);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdFillBuffer(XGL_CMD_BUFFER cmdBuffer, XGL_BUFFER destBuffer, XGL_GPU_SIZE destOffset, XGL_GPU_SIZE fillSize, uint32_t data);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdClearColorImage(XGL_CMD_BUFFER cmdBuffer, XGL_IMAGE image, const float color[4], uint32_t rangeCount, const XGL_IMAGE_SUBRESOURCE_RANGE* pRanges);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdClearColorImageRaw(XGL_CMD_BUFFER cmdBuffer, XGL_IMAGE image, const uint32_t color[4], uint32_t rangeCount, const XGL_IMAGE_SUBRESOURCE_RANGE* pRanges);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdClearDepthStencil(XGL_CMD_BUFFER cmdBuffer, XGL_IMAGE image, float depth, uint32_t stencil, uint32_t rangeCount, const XGL_IMAGE_SUBRESOURCE_RANGE* pRanges);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdResolveImage(XGL_CMD_BUFFER cmdBuffer, XGL_IMAGE srcImage, XGL_IMAGE destImage, uint32_t rectCount, const XGL_IMAGE_RESOLVE* pRects);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdSetEvent(XGL_CMD_BUFFER cmdBuffer, XGL_EVENT event, XGL_SET_EVENT pipeEvent);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdResetEvent(XGL_CMD_BUFFER cmdBuffer, XGL_EVENT event);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdWaitEvents(XGL_CMD_BUFFER cmdBuffer, const XGL_EVENT_WAIT_INFO* pWaitInfo);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdPipelineBarrier(XGL_CMD_BUFFER cmdBuffer, const XGL_PIPELINE_BARRIER* pBarrier);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdBeginQuery(XGL_CMD_BUFFER cmdBuffer, XGL_QUERY_POOL queryPool, uint32_t slot, XGL_FLAGS flags);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdEndQuery(XGL_CMD_BUFFER cmdBuffer, XGL_QUERY_POOL queryPool, uint32_t slot);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdResetQueryPool(XGL_CMD_BUFFER cmdBuffer, XGL_QUERY_POOL queryPool, uint32_t startQuery, uint32_t queryCount);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdWriteTimestamp(XGL_CMD_BUFFER cmdBuffer, XGL_TIMESTAMP_TYPE timestampType, XGL_BUFFER destBuffer, XGL_GPU_SIZE destOffset);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdInitAtomicCounters(XGL_CMD_BUFFER cmdBuffer, XGL_PIPELINE_BIND_POINT pipelineBindPoint, uint32_t startCounter, uint32_t counterCount, const uint32_t* pData);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdLoadAtomicCounters(XGL_CMD_BUFFER cmdBuffer, XGL_PIPELINE_BIND_POINT pipelineBindPoint, uint32_t startCounter, uint32_t counterCount, XGL_BUFFER srcBuffer, XGL_GPU_SIZE srcOffset);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdSaveAtomicCounters(XGL_CMD_BUFFER cmdBuffer, XGL_PIPELINE_BIND_POINT pipelineBindPoint, uint32_t startCounter, uint32_t counterCount, XGL_BUFFER destBuffer, XGL_GPU_SIZE destOffset);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateFramebuffer(XGL_DEVICE device, const XGL_FRAMEBUFFER_CREATE_INFO* pCreateInfo, XGL_FRAMEBUFFER* pFramebuffer);
GLVTRACER_EXPORT XGL_RESULT XGLAPI __HOOKED_xglCreateRenderPass(XGL_DEVICE device, const XGL_RENDER_PASS_CREATE_INFO* pCreateInfo, XGL_RENDER_PASS* pRenderPass);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdBeginRenderPass(XGL_CMD_BUFFER cmdBuffer, XGL_RENDER_PASS renderPass);
GLVTRACER_EXPORT void XGLAPI __HOOKED_xglCmdEndRenderPass(XGL_CMD_BUFFER cmdBuffer, XGL_RENDER_PASS renderPass);

extern XGL_RESULT( XGLAPI * real_xglCreateInstance)(
    const XGL_APPLICATION_INFO* pAppInfo,
    const XGL_ALLOC_CALLBACKS* pAllocCb,
    XGL_INSTANCE* pInstance);

extern XGL_RESULT( XGLAPI * real_xglDestroyInstance)(
    XGL_INSTANCE instance);

extern XGL_RESULT( XGLAPI * real_xglEnumerateGpus)(
    XGL_INSTANCE instance,
    uint32_t maxGpus,
    uint32_t* pGpuCount,
    XGL_PHYSICAL_GPU* pGpus);

extern XGL_RESULT( XGLAPI * real_xglGetGpuInfo)(
    XGL_PHYSICAL_GPU gpu,
    XGL_PHYSICAL_GPU_INFO_TYPE infoType,
    size_t* pDataSize,
    void* pData);

extern void*( XGLAPI * real_xglGetProcAddr)(
    XGL_PHYSICAL_GPU gpu,
    const char* pName);

extern XGL_RESULT( XGLAPI * real_xglCreateDevice)(
    XGL_PHYSICAL_GPU gpu,
    const XGL_DEVICE_CREATE_INFO* pCreateInfo,
    XGL_DEVICE* pDevice);

extern XGL_RESULT( XGLAPI * real_xglDestroyDevice)(
    XGL_DEVICE device);

extern XGL_RESULT( XGLAPI * real_xglGetExtensionSupport)(
    XGL_PHYSICAL_GPU gpu,
    const char* pExtName);

extern XGL_RESULT( XGLAPI * real_xglEnumerateLayers)(
    XGL_PHYSICAL_GPU gpu,
    size_t maxLayerCount,
    size_t maxStringSize,
    size_t* pOutLayerCount,
    char* const* pOutLayers,
    void* pReserved);

extern XGL_RESULT( XGLAPI * real_xglGetDeviceQueue)(
    XGL_DEVICE device,
    uint32_t queueNodeIndex,
    uint32_t queueIndex,
    XGL_QUEUE* pQueue);

extern XGL_RESULT( XGLAPI * real_xglQueueSubmit)(
    XGL_QUEUE queue,
    uint32_t cmdBufferCount,
    const XGL_CMD_BUFFER* pCmdBuffers,
    uint32_t memRefCount,
    const XGL_MEMORY_REF* pMemRefs,
    XGL_FENCE fence);

extern XGL_RESULT( XGLAPI * real_xglQueueSetGlobalMemReferences)(
    XGL_QUEUE queue,
    uint32_t memRefCount,
    const XGL_MEMORY_REF* pMemRefs);

extern XGL_RESULT( XGLAPI * real_xglQueueWaitIdle)(
    XGL_QUEUE queue);

extern XGL_RESULT( XGLAPI * real_xglDeviceWaitIdle)(
    XGL_DEVICE device);

extern XGL_RESULT( XGLAPI * real_xglAllocMemory)(
    XGL_DEVICE device,
    const XGL_MEMORY_ALLOC_INFO* pAllocInfo,
    XGL_GPU_MEMORY* pMem);

extern XGL_RESULT( XGLAPI * real_xglFreeMemory)(
    XGL_GPU_MEMORY mem);

extern XGL_RESULT( XGLAPI * real_xglSetMemoryPriority)(
    XGL_GPU_MEMORY mem,
    XGL_MEMORY_PRIORITY priority);

extern XGL_RESULT( XGLAPI * real_xglMapMemory)(
    XGL_GPU_MEMORY mem,
    XGL_FLAGS flags,
    void** ppData);

extern XGL_RESULT( XGLAPI * real_xglUnmapMemory)(
    XGL_GPU_MEMORY mem);

extern XGL_RESULT( XGLAPI * real_xglPinSystemMemory)(
    XGL_DEVICE device,
    const void* pSysMem,
    size_t memSize,
    XGL_GPU_MEMORY* pMem);

extern XGL_RESULT( XGLAPI * real_xglGetMultiGpuCompatibility)(
    XGL_PHYSICAL_GPU gpu0,
    XGL_PHYSICAL_GPU gpu1,
    XGL_GPU_COMPATIBILITY_INFO* pInfo);

extern XGL_RESULT( XGLAPI * real_xglOpenSharedMemory)(
    XGL_DEVICE device,
    const XGL_MEMORY_OPEN_INFO* pOpenInfo,
    XGL_GPU_MEMORY* pMem);

extern XGL_RESULT( XGLAPI * real_xglOpenSharedQueueSemaphore)(
    XGL_DEVICE device,
    const XGL_QUEUE_SEMAPHORE_OPEN_INFO* pOpenInfo,
    XGL_QUEUE_SEMAPHORE* pSemaphore);

extern XGL_RESULT( XGLAPI * real_xglOpenPeerMemory)(
    XGL_DEVICE device,
    const XGL_PEER_MEMORY_OPEN_INFO* pOpenInfo,
    XGL_GPU_MEMORY* pMem);

extern XGL_RESULT( XGLAPI * real_xglOpenPeerImage)(
    XGL_DEVICE device,
    const XGL_PEER_IMAGE_OPEN_INFO* pOpenInfo,
    XGL_IMAGE* pImage,
    XGL_GPU_MEMORY* pMem);

extern XGL_RESULT( XGLAPI * real_xglDestroyObject)(
    XGL_OBJECT object);

extern XGL_RESULT( XGLAPI * real_xglGetObjectInfo)(
    XGL_BASE_OBJECT object,
    XGL_OBJECT_INFO_TYPE infoType,
    size_t* pDataSize,
    void* pData);

extern XGL_RESULT( XGLAPI * real_xglBindObjectMemory)(
    XGL_OBJECT object,
    uint32_t allocationIdx,
    XGL_GPU_MEMORY mem,
    XGL_GPU_SIZE offset);

extern XGL_RESULT( XGLAPI * real_xglBindObjectMemoryRange)(
    XGL_OBJECT object,
    uint32_t allocationIdx,
    XGL_GPU_SIZE rangeOffset,
    XGL_GPU_SIZE rangeSize,
    XGL_GPU_MEMORY mem,
    XGL_GPU_SIZE memOffset);

extern XGL_RESULT( XGLAPI * real_xglBindImageMemoryRange)(
    XGL_IMAGE image,
    uint32_t allocationIdx,
    const XGL_IMAGE_MEMORY_BIND_INFO* bindInfo,
    XGL_GPU_MEMORY mem,
    XGL_GPU_SIZE memOffset);

extern XGL_RESULT( XGLAPI * real_xglCreateFence)(
    XGL_DEVICE device,
    const XGL_FENCE_CREATE_INFO* pCreateInfo,
    XGL_FENCE* pFence);

extern XGL_RESULT( XGLAPI * real_xglGetFenceStatus)(
    XGL_FENCE fence);

extern XGL_RESULT( XGLAPI * real_xglWaitForFences)(
    XGL_DEVICE device,
    uint32_t fenceCount,
    const XGL_FENCE* pFences,
    bool32_t waitAll,
    uint64_t timeout);

extern XGL_RESULT( XGLAPI * real_xglCreateQueueSemaphore)(
    XGL_DEVICE device,
    const XGL_QUEUE_SEMAPHORE_CREATE_INFO* pCreateInfo,
    XGL_QUEUE_SEMAPHORE* pSemaphore);

extern XGL_RESULT( XGLAPI * real_xglSignalQueueSemaphore)(
    XGL_QUEUE queue,
    XGL_QUEUE_SEMAPHORE semaphore);

extern XGL_RESULT( XGLAPI * real_xglWaitQueueSemaphore)(
    XGL_QUEUE queue,
    XGL_QUEUE_SEMAPHORE semaphore);

extern XGL_RESULT( XGLAPI * real_xglCreateEvent)(
    XGL_DEVICE device,
    const XGL_EVENT_CREATE_INFO* pCreateInfo,
    XGL_EVENT* pEvent);

extern XGL_RESULT( XGLAPI * real_xglGetEventStatus)(
    XGL_EVENT event);

extern XGL_RESULT( XGLAPI * real_xglSetEvent)(
    XGL_EVENT event);

extern XGL_RESULT( XGLAPI * real_xglResetEvent)(
    XGL_EVENT event);

extern XGL_RESULT( XGLAPI * real_xglCreateQueryPool)(
    XGL_DEVICE device,
    const XGL_QUERY_POOL_CREATE_INFO* pCreateInfo,
    XGL_QUERY_POOL* pQueryPool);

extern XGL_RESULT( XGLAPI * real_xglGetQueryPoolResults)(
    XGL_QUERY_POOL queryPool,
    uint32_t startQuery,
    uint32_t queryCount,
    size_t* pDataSize,
    void* pData);

extern XGL_RESULT( XGLAPI * real_xglGetFormatInfo)(
    XGL_DEVICE device,
    XGL_FORMAT format,
    XGL_FORMAT_INFO_TYPE infoType,
    size_t* pDataSize,
    void* pData);

extern XGL_RESULT( XGLAPI * real_xglCreateBuffer)(
    XGL_DEVICE device,
    const XGL_BUFFER_CREATE_INFO* pCreateInfo,
    XGL_BUFFER* pBuffer);

extern XGL_RESULT( XGLAPI * real_xglCreateBufferView)(
    XGL_DEVICE device,
    const XGL_BUFFER_VIEW_CREATE_INFO* pCreateInfo,
    XGL_BUFFER_VIEW* pView);

extern XGL_RESULT( XGLAPI * real_xglCreateImage)(
    XGL_DEVICE device,
    const XGL_IMAGE_CREATE_INFO* pCreateInfo,
    XGL_IMAGE* pImage);

extern XGL_RESULT( XGLAPI * real_xglSetFastClearColor)(
    XGL_IMAGE image,
    const float color[4]);

extern XGL_RESULT( XGLAPI * real_xglSetFastClearDepth)(
    XGL_IMAGE image,
    float depth);

extern XGL_RESULT( XGLAPI * real_xglGetImageSubresourceInfo)(
    XGL_IMAGE image,
    const XGL_IMAGE_SUBRESOURCE* pSubresource,
    XGL_SUBRESOURCE_INFO_TYPE infoType,
    size_t* pDataSize,
    void* pData);

extern XGL_RESULT( XGLAPI * real_xglCreateImageView)(
    XGL_DEVICE device,
    const XGL_IMAGE_VIEW_CREATE_INFO* pCreateInfo,
    XGL_IMAGE_VIEW* pView);

extern XGL_RESULT( XGLAPI * real_xglCreateColorAttachmentView)(
    XGL_DEVICE device,
    const XGL_COLOR_ATTACHMENT_VIEW_CREATE_INFO* pCreateInfo,
    XGL_COLOR_ATTACHMENT_VIEW* pView);

extern XGL_RESULT( XGLAPI * real_xglCreateDepthStencilView)(
    XGL_DEVICE device,
    const XGL_DEPTH_STENCIL_VIEW_CREATE_INFO* pCreateInfo,
    XGL_DEPTH_STENCIL_VIEW* pView);

extern XGL_RESULT( XGLAPI * real_xglCreateShader)(
    XGL_DEVICE device,
    const XGL_SHADER_CREATE_INFO* pCreateInfo,
    XGL_SHADER* pShader);

extern XGL_RESULT( XGLAPI * real_xglCreateGraphicsPipeline)(
    XGL_DEVICE device,
    const XGL_GRAPHICS_PIPELINE_CREATE_INFO* pCreateInfo,
    XGL_PIPELINE* pPipeline);

extern XGL_RESULT( XGLAPI * real_xglCreateComputePipeline)(
    XGL_DEVICE device,
    const XGL_COMPUTE_PIPELINE_CREATE_INFO* pCreateInfo,
    XGL_PIPELINE* pPipeline);

extern XGL_RESULT( XGLAPI * real_xglStorePipeline)(
    XGL_PIPELINE pipeline,
    size_t* pDataSize,
    void* pData);

extern XGL_RESULT( XGLAPI * real_xglLoadPipeline)(
    XGL_DEVICE device,
    size_t dataSize,
    const void* pData,
    XGL_PIPELINE* pPipeline);

extern XGL_RESULT( XGLAPI * real_xglCreatePipelineDelta)(
    XGL_DEVICE device,
    XGL_PIPELINE p1,
    XGL_PIPELINE p2,
    XGL_PIPELINE_DELTA* delta);

extern XGL_RESULT( XGLAPI * real_xglCreateSampler)(
    XGL_DEVICE device,
    const XGL_SAMPLER_CREATE_INFO* pCreateInfo,
    XGL_SAMPLER* pSampler);

extern XGL_RESULT( XGLAPI * real_xglCreateDescriptorSetLayout)(
    XGL_DEVICE device,
    XGL_FLAGS stageFlags,
    const uint32_t* pSetBindPoints,
    XGL_DESCRIPTOR_SET_LAYOUT priorSetLayout,
    const XGL_DESCRIPTOR_SET_LAYOUT_CREATE_INFO* pSetLayoutInfoList,
    XGL_DESCRIPTOR_SET_LAYOUT* pSetLayout);

extern XGL_RESULT( XGLAPI * real_xglBeginDescriptorRegionUpdate)(
    XGL_DEVICE device,
    XGL_DESCRIPTOR_UPDATE_MODE updateMode);

extern XGL_RESULT( XGLAPI * real_xglEndDescriptorRegionUpdate)(
    XGL_DEVICE device,
    XGL_CMD_BUFFER cmd);

extern XGL_RESULT( XGLAPI * real_xglCreateDescriptorRegion)(
    XGL_DEVICE device,
    XGL_DESCRIPTOR_REGION_USAGE regionUsage,
    uint32_t maxSets,
    const XGL_DESCRIPTOR_REGION_CREATE_INFO* pCreateInfo,
    XGL_DESCRIPTOR_REGION* pDescriptorRegion);

extern XGL_RESULT( XGLAPI * real_xglClearDescriptorRegion)(
    XGL_DESCRIPTOR_REGION descriptorRegion);

extern XGL_RESULT( XGLAPI * real_xglAllocDescriptorSets)(
    XGL_DESCRIPTOR_REGION descriptorRegion,
    XGL_DESCRIPTOR_SET_USAGE setUsage,
    uint32_t count,
    const XGL_DESCRIPTOR_SET_LAYOUT* pSetLayouts,
    XGL_DESCRIPTOR_SET* pDescriptorSets,
    uint32_t* pCount);

extern void( XGLAPI * real_xglClearDescriptorSets)(
    XGL_DESCRIPTOR_REGION descriptorRegion,
    uint32_t count,
    const XGL_DESCRIPTOR_SET* pDescriptorSets);

extern void( XGLAPI * real_xglUpdateDescriptors)(
    XGL_DESCRIPTOR_SET descriptorSet,
    const void* pUpdateChain);

extern XGL_RESULT( XGLAPI * real_xglCreateDynamicViewportState)(
    XGL_DEVICE device,
    const XGL_DYNAMIC_VP_STATE_CREATE_INFO* pCreateInfo,
    XGL_DYNAMIC_VP_STATE_OBJECT* pState);

extern XGL_RESULT( XGLAPI * real_xglCreateDynamicRasterState)(
    XGL_DEVICE device,
    const XGL_DYNAMIC_RS_STATE_CREATE_INFO* pCreateInfo,
    XGL_DYNAMIC_RS_STATE_OBJECT* pState);

extern XGL_RESULT( XGLAPI * real_xglCreateDynamicColorBlendState)(
    XGL_DEVICE device,
    const XGL_DYNAMIC_CB_STATE_CREATE_INFO* pCreateInfo,
    XGL_DYNAMIC_CB_STATE_OBJECT* pState);

extern XGL_RESULT( XGLAPI * real_xglCreateDynamicDepthStencilState)(
    XGL_DEVICE device,
    const XGL_DYNAMIC_DS_STATE_CREATE_INFO* pCreateInfo,
    XGL_DYNAMIC_DS_STATE_OBJECT* pState);

extern XGL_RESULT( XGLAPI * real_xglCreateCommandBuffer)(
    XGL_DEVICE device,
    const XGL_CMD_BUFFER_CREATE_INFO* pCreateInfo,
    XGL_CMD_BUFFER* pCmdBuffer);

extern XGL_RESULT( XGLAPI * real_xglBeginCommandBuffer)(
    XGL_CMD_BUFFER cmdBuffer,
    const XGL_CMD_BUFFER_BEGIN_INFO* pBeginInfo);

extern XGL_RESULT( XGLAPI * real_xglEndCommandBuffer)(
    XGL_CMD_BUFFER cmdBuffer);

extern XGL_RESULT( XGLAPI * real_xglResetCommandBuffer)(
    XGL_CMD_BUFFER cmdBuffer);

extern void( XGLAPI * real_xglCmdBindPipeline)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_PIPELINE_BIND_POINT pipelineBindPoint,
    XGL_PIPELINE pipeline);

extern void( XGLAPI * real_xglCmdBindPipelineDelta)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_PIPELINE_BIND_POINT pipelineBindPoint,
    XGL_PIPELINE_DELTA delta);

extern void( XGLAPI * real_xglCmdBindDynamicStateObject)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_STATE_BIND_POINT stateBindPoint,
    XGL_DYNAMIC_STATE_OBJECT state);

extern void( XGLAPI * real_xglCmdBindDescriptorSet)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_PIPELINE_BIND_POINT pipelineBindPoint,
    XGL_DESCRIPTOR_SET descriptorSet,
    const uint32_t* pUserData);

extern void( XGLAPI * real_xglCmdBindVertexBuffer)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_BUFFER buffer,
    XGL_GPU_SIZE offset,
    uint32_t binding);

extern void( XGLAPI * real_xglCmdBindIndexBuffer)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_BUFFER buffer,
    XGL_GPU_SIZE offset,
    XGL_INDEX_TYPE indexType);

extern void( XGLAPI * real_xglCmdDraw)(
    XGL_CMD_BUFFER cmdBuffer,
    uint32_t firstVertex,
    uint32_t vertexCount,
    uint32_t firstInstance,
    uint32_t instanceCount);

extern void( XGLAPI * real_xglCmdDrawIndexed)(
    XGL_CMD_BUFFER cmdBuffer,
    uint32_t firstIndex,
    uint32_t indexCount,
    int32_t vertexOffset,
    uint32_t firstInstance,
    uint32_t instanceCount);

extern void( XGLAPI * real_xglCmdDrawIndirect)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_BUFFER buffer,
    XGL_GPU_SIZE offset,
    uint32_t count,
    uint32_t stride);

extern void( XGLAPI * real_xglCmdDrawIndexedIndirect)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_BUFFER buffer,
    XGL_GPU_SIZE offset,
    uint32_t count,
    uint32_t stride);

extern void( XGLAPI * real_xglCmdDispatch)(
    XGL_CMD_BUFFER cmdBuffer,
    uint32_t x,
    uint32_t y,
    uint32_t z);

extern void( XGLAPI * real_xglCmdDispatchIndirect)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_BUFFER buffer,
    XGL_GPU_SIZE offset);

extern void( XGLAPI * real_xglCmdCopyBuffer)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_BUFFER srcBuffer,
    XGL_BUFFER destBuffer,
    uint32_t regionCount,
    const XGL_BUFFER_COPY* pRegions);

extern void( XGLAPI * real_xglCmdCopyImage)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_IMAGE srcImage,
    XGL_IMAGE destImage,
    uint32_t regionCount,
    const XGL_IMAGE_COPY* pRegions);

extern void( XGLAPI * real_xglCmdCopyBufferToImage)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_BUFFER srcBuffer,
    XGL_IMAGE destImage,
    uint32_t regionCount,
    const XGL_BUFFER_IMAGE_COPY* pRegions);

extern void( XGLAPI * real_xglCmdCopyImageToBuffer)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_IMAGE srcImage,
    XGL_BUFFER destBuffer,
    uint32_t regionCount,
    const XGL_BUFFER_IMAGE_COPY* pRegions);

extern void( XGLAPI * real_xglCmdCloneImageData)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_IMAGE srcImage,
    XGL_IMAGE_LAYOUT srcImageLayout,
    XGL_IMAGE destImage,
    XGL_IMAGE_LAYOUT destImageLayout);

extern void( XGLAPI * real_xglCmdUpdateBuffer)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_BUFFER destBuffer,
    XGL_GPU_SIZE destOffset,
    XGL_GPU_SIZE dataSize,
    const uint32_t* pData);

extern void( XGLAPI * real_xglCmdFillBuffer)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_BUFFER destBuffer,
    XGL_GPU_SIZE destOffset,
    XGL_GPU_SIZE fillSize,
    uint32_t data);

extern void( XGLAPI * real_xglCmdClearColorImage)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_IMAGE image,
    const float color[4],
    uint32_t rangeCount,
    const XGL_IMAGE_SUBRESOURCE_RANGE* pRanges);

extern void( XGLAPI * real_xglCmdClearColorImageRaw)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_IMAGE image,
    const uint32_t color[4],
    uint32_t rangeCount,
    const XGL_IMAGE_SUBRESOURCE_RANGE* pRanges);

extern void( XGLAPI * real_xglCmdClearDepthStencil)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_IMAGE image,
    float depth,
    uint32_t stencil,
    uint32_t rangeCount,
    const XGL_IMAGE_SUBRESOURCE_RANGE* pRanges);

extern void( XGLAPI * real_xglCmdResolveImage)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_IMAGE srcImage,
    XGL_IMAGE destImage,
    uint32_t rectCount,
    const XGL_IMAGE_RESOLVE* pRects);

extern void( XGLAPI * real_xglCmdSetEvent)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_EVENT event,
    XGL_SET_EVENT pipeEvent);

extern void( XGLAPI * real_xglCmdResetEvent)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_EVENT event);

extern void( XGLAPI * real_xglCmdWaitEvents)(
    XGL_CMD_BUFFER cmdBuffer,
    const XGL_EVENT_WAIT_INFO* pWaitInfo);

extern void( XGLAPI * real_xglCmdPipelineBarrier)(
    XGL_CMD_BUFFER cmdBuffer,
    const XGL_PIPELINE_BARRIER* pBarrier);

extern void( XGLAPI * real_xglCmdBeginQuery)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_QUERY_POOL queryPool,
    uint32_t slot,
    XGL_FLAGS flags);

extern void( XGLAPI * real_xglCmdEndQuery)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_QUERY_POOL queryPool,
    uint32_t slot);

extern void( XGLAPI * real_xglCmdResetQueryPool)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_QUERY_POOL queryPool,
    uint32_t startQuery,
    uint32_t queryCount);

extern void( XGLAPI * real_xglCmdWriteTimestamp)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_TIMESTAMP_TYPE timestampType,
    XGL_BUFFER destBuffer,
    XGL_GPU_SIZE destOffset);

extern void( XGLAPI * real_xglCmdInitAtomicCounters)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_PIPELINE_BIND_POINT pipelineBindPoint,
    uint32_t startCounter,
    uint32_t counterCount,
    const uint32_t* pData);

extern void( XGLAPI * real_xglCmdLoadAtomicCounters)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_PIPELINE_BIND_POINT pipelineBindPoint,
    uint32_t startCounter,
    uint32_t counterCount,
    XGL_BUFFER srcBuffer,
    XGL_GPU_SIZE srcOffset);

extern void( XGLAPI * real_xglCmdSaveAtomicCounters)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_PIPELINE_BIND_POINT pipelineBindPoint,
    uint32_t startCounter,
    uint32_t counterCount,
    XGL_BUFFER destBuffer,
    XGL_GPU_SIZE destOffset);

extern XGL_RESULT( XGLAPI * real_xglCreateFramebuffer)(
    XGL_DEVICE device,
    const XGL_FRAMEBUFFER_CREATE_INFO* pCreateInfo,
    XGL_FRAMEBUFFER* pFramebuffer);

extern XGL_RESULT( XGLAPI * real_xglCreateRenderPass)(
    XGL_DEVICE device,
    const XGL_RENDER_PASS_CREATE_INFO* pCreateInfo,
    XGL_RENDER_PASS* pRenderPass);

extern void( XGLAPI * real_xglCmdBeginRenderPass)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_RENDER_PASS renderPass);

extern void( XGLAPI * real_xglCmdEndRenderPass)(
    XGL_CMD_BUFFER cmdBuffer,
    XGL_RENDER_PASS renderPass);

