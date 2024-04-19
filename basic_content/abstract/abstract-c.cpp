class AbstractBase{
    public:
        virtual void show() = 0;
};
从URL中获取电影信息, 利用list和dict存储电影信

docker run -d --name=ghost \
-p 2368:2368 \
-e url=https://luhaibin.xyz \
-v /volume1/docker/ghost:/var/lib/ghost/content \
--restart always \
ghost:5.8.3