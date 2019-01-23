module MessageEvent: {
    [@decco.decode] type t = { data: Js.Json.t, origin: string, source: ReDomTypes.window };
};

module DragStartEvent: {
    [@decco.decode] type t = { dataTransfer: DataTransfer.t };
    let unsafeCast: _ => t;
};

module DragEvent: {
    [@decco.decode] type t = { clientX: int, clientY: int, screenX: int, screenY: int };
};

module DataTransfer: {
    type t = DataTransfer.t;
    let setDragImage: (ReDomTypes.element('a), int, int, t) => unit;
};

module LoadEvent: {
    type t;
};
