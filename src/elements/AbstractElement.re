module type T = {
    type t;
    let tagName: string;
};

module Impl = (T: T) => {
  type _t = T.t;

  external _unsafeCast : 'a => Element.t(_t) = "%identity";
  let cast = (element) =>
      if (Element.tagName(element) === T.tagName) {
          Some(_unsafeCast(element))
      } else {
          None
      };
};
