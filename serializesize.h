#ifndef SERIALIZESIZE_H
#define SERIALIZESIZE_H
#include <QBuffer>
#include <QDataStream>


class SerializeSize
{
  QBuffer m_data;
  QDataStream m_stream;
public:
  SerializeSize();
  template <typename T>
  quint64 operator ()(const T & t) {
    m_data.seek(0);
    m_stream << t;
    return m_data.pos();
  }
};

#endif // SERIALIZESIZE_H
