<template>
    <div class="min-vh-100 d-flex align-items-center justify-content-center bg-outer-space p-3">
        
        <div class="card-profile p-5 rounded-4 shadow-lg text-center text-dark" style="max-width: 500px; width: 100%;">
            
            <div class="mb-4 d-inline-block">
                <div class="position-relative rounded-circle shadow-sm"
                    style="width: 200px; height: 200px; overflow: hidden; border: 4px solid white;">
                    <img src="../images/profile.jpg" alt="Profile Picture" class="w-100 h-100"
                        style="object-fit: cover; object-position: center;" />
                </div>
            </div>

            <div class="mb-4">
                <h1 class="fw-bold mb-2">OakTana</h1>
                <p class="text-secondary px-3">
                    Hi! I'm Oak, a fullstack developer who loves gaming, coding, and building cool projects. Connect with me!
                </p>
            </div>

            <div class="d-grid gap-3 px-2">
                <a href="https://www.facebook.com/oak.tana.5" class="btn btn-primary py-2.5 rounded-pill shadow-sm fw-semibold" target="_blank">
                    <i class="bi bi-facebook me-2"></i> Facebook
                </a>
                <a href="https://www.instagram.com/stories/jrp_oak" class="btn btn-danger py-2.5 rounded-pill shadow-sm fw-semibold" target="_blank">
                    <i class="bi bi-instagram me-2"></i> Instagram
                </a>
                <a href="https://github.com/matchio" class="btn btn-dark py-2.5 rounded-pill shadow-sm fw-semibold" target="_blank">
                    <i class="bi bi-github me-2"></i> GitHub
                </a>
                <a href="https://steamcommunity.com/profiles/76561198239480358" class="btn btn-secondary py-2.5 rounded-pill shadow-sm fw-semibold" target="_blank">
                    <i class="bi bi-steam"></i> Steam
                </a>
            </div>
        </div>

    </div>
</template>

<style scoped>
/* พื้นหลังของทั้งหน้าจอ */
.bg-outer-space {
    background-color: #e8f5e9; /* สีเขียวอ่อนพาสเทลที่คุณชอบ */
}

/* ตัวการ์ดสีขาวตัดกับพื้นหลังรอบนอก ทำให้ดูมิติและสะอาดตาขึ้น */
.card-profile {
    background-color: #ffffff;
}
</style>