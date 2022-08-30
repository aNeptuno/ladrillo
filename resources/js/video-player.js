var player = videojs('videoPlayer', {
    autoplay: 'muted',
    controls: false,
    poster: '../../resources/images/thumbnail01',
    loop: true,
    fill: true,
    userActions: {
        hotkeys: true
    }
});
