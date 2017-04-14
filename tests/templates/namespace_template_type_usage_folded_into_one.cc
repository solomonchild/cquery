namespace ns {
  template<typename T>
  class Foo {};

  Foo<int> a;
  Foo<bool> b;
}

/*
OUTPUT:
{
  "types": [{
      "id": 0,
      "usr": "c:@N@ns@ST>1#T@Foo",
      "short_name": "Foo",
      "qualified_name": "ns::Foo",
      "definition_spelling": "3:9-3:12",
      "definition_extent": "3:3-3:15",
      "instantiations": [0, 1],
      "uses": ["*3:9-3:12", "*5:3-5:6", "*6:3-6:6"]
    }],
  "vars": [{
      "id": 0,
      "usr": "c:@N@ns@a",
      "short_name": "a",
      "qualified_name": "ns::a",
      "hover": "Foo<int>",
      "definition_spelling": "5:12-5:13",
      "definition_extent": "5:3-5:13",
      "variable_type": 0,
      "uses": ["5:12-5:13"]
    }, {
      "id": 1,
      "usr": "c:@N@ns@b",
      "short_name": "b",
      "qualified_name": "ns::b",
      "hover": "Foo<bool>",
      "definition_spelling": "6:13-6:14",
      "definition_extent": "6:3-6:14",
      "variable_type": 0,
      "uses": ["6:13-6:14"]
    }]
}
*/
