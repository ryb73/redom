module MessageEvent: {
  type t = {. "data": Js.Json.t, "origin": string, "source": Types.window };
};

module DragStartEvent: {
    type t = {. "dataTransfer": DataTransfer.t };
    let unsafeCast: 'a => t;
};

module DragEvent: {
    type t = {. "clientX": int, "clientY": int, "screenX": int, "screenY": int };
    let unsafeCast: 'a => t;
};

module DataTransfer: {
    type t = DataTransfer.t;
    let setDragImage: (Element.t('a), int, int, t) => unit;
};
