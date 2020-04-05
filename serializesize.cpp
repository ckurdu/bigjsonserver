#include "serializesize.h"

SerializeSize::SerializeSize()
{
    m_stream.setDevice(&m_data);
    m_data.open(QIODevice::WriteOnly);
};
