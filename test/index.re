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

Window.alert(~window=ReDom.window, "alrt");
Window.prompt(~message="prmtpt") |> Js.log2("!");

Location.((
    Js.log2("protocol", protocol()),
    Js.log2("host", host()),
    Js.log2("hostname", hostname()),
    Js.log2("port", port()),
    Js.log2("pathname", pathname()),
    Js.log2("search", search()),
    Js.log2("hash", hash()),
    Js.log2("username", username()),
    Js.log2("password", password()),
    Js.log2("origin", origin()),
));

Url.(
    make(Location.href())
    |> withHash("hash")
    |> withHostname("wut.org")
    |> withPathname("/path")
    |> withSearch("search")
    /** protocol must come before port, user, and pass. apparently they're not
     *  supported for file:? */
    |> withProtocol("ftp")
    |> withUsername("user")
    |> withPassword("pass")
    |> withPort("1000")
    |> href
    |> Js.log
);
