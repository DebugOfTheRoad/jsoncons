### jsoncons::cbor::decode_cbor

Decodes a [cbor](http://cbor.io/) binary serialization format to a json value.

#### Header
```c++
#include <jsoncons_ext/cbor/cbor.hpp>

template<class Json>
Json decode_cbor(const std::vector<uint8_t>& v)
```

#### See also

- [encode_cbor](encode_cbor.md) encodes a json value to the [cbor](http://cbor.io/) binary serialization format.


