class Foo {
  static int foo;
};

int Foo::foo;

/*
OUTPUT:
{
  "types": [{
      "id": 0,
      "usr": "c:@S@Foo",
      "short_name": "Foo",
      "qualified_name": "Foo",
      "definition_spelling": "1:7-1:10",
      "definition_extent": "1:1-3:2",
      "vars": [0],
      "uses": ["*1:7-1:10", "5:5-5:8"]
    }],
  "vars": [{
      "id": 0,
      "usr": "c:@S@Foo@foo",
      "short_name": "foo",
      "qualified_name": "Foo::foo",
      "hover": "int",
      "declaration": "2:14-2:17",
      "definition_spelling": "5:10-5:13",
      "definition_extent": "5:1-5:13",
      "declaring_type": 0,
      "uses": ["2:14-2:17", "5:10-5:13"]
    }]
}
*/
