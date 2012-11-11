
#include <assert.h>

#include "DecoderInterface.h"
#include "RendererInterface.h"

#include "JitterBuffer.h"

CJitterBuffer::CJitterBuffer(IDecoder* pDecoder, IRenderer* pRenderer)
: mpDecoder(pDecoder),
  mpRenderer(pRenderer)
{
	assert(mpDecoder);
	assert(mpRenderer);
}

void CJitterBuffer::ReceivePacket( 
	                    const char*        pBuffer,
						const unsigned int length,
						const unsigned int frameNumber,
						const unsigned int fragmentNumber,
						const unsigned int numFragmentsInThisFrame)
{
	assert(pBuffer);
	assert(length > 0);
	assert(fragmentNumber < numFragmentsInThisFrame);
}

CJitterBuffer::~CJitterBuffer()
{

}
