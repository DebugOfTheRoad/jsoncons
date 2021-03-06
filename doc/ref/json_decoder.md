### jsoncons::json_decoder

```c++
template <class Json>
json_decoder
```

#### Header
```c++
#include <jsoncons/json_decoder.hpp>
```

#### Base classes

[json_input_handler](json_input_handler.md)

#### Member types

Member type                         |Definition
------------------------------------|------------------------------
`json_type`|Json
`allocator_type`|Json::allocator_type

#### Constructors

    json_decoder(const allocator_type allocator = allocator_type())

#### Member functions

    allocator_type get_allocator() const
Returns the allocator associated with the json value.

    bool is_valid() const
Checks if the `deserializer` contains a valid json_type value. The initial `is_valid()` is false, becomes `true` when a `do_end_json` event is received, and becomes false when `get_result()` is called.

    json_type get_result()
Returns the json value `v` stored in the `deserializer` as `std::move(v)`. If before calling this function `is_valid()` is false, the behavior is undefined. After `get_result()` is called, 'is_valid()' becomes false.
