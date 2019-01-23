let mSpan = Document.getElementById("span");

let spanFrame = Js.Option.getExn(mSpan)
    |> IFrame.cast;

Js.log(Js.Option.isSome(spanFrame));

let iFrame = Document.getElementById("iframe")
  |> Js.Option.getExn
  |> IFrame.cast;

switch iFrame {
    | None => Js.log("None")
    | Some(iFrame) =>
        Js.log(Element.tagName(iFrame));
        Js.log(IFrame.contentWindow(iFrame))
};

let span = mSpan |> Js.Option.getExn;
Js.log(Element.tagName(span));

Window.alert("alrt");
Window.prompt(~message="prmtpt") |> Js.log2("!");
