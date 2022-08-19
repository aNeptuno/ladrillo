var player = videojs('videoPlayer', {
    autoplay: 'muted',
    controls: true,
    poster: '../../resources/images/thumbnail01',
    loop: true,
    fill: true,
    userActions: {
        hotkeys: true
    }
});
