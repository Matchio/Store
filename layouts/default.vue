<template>
    <div class="min-h-screen bg-gradient-to-r from-blue-500 via-purple-500 to-pink-500">
      <header class="bg-white shadow-md">
        <div class="container mx-auto py-4 px-6 flex justify-between items-center">
          <h1 class="text-2xl font-bold text-gray-800">My Portfolio</h1>
          <nav>
            <ul class="flex space-x-4">
              <li><NuxtLink to="/" class="text-gray-600 hover:text-gray-900">Home</NuxtLink></li>
              <li><NuxtLink to="/about" class="text-gray-600 hover:text-gray-900">About</NuxtLink></li>
              <li><NuxtLink to="/projects" class="text-gray-600 hover:text-gray-900">Projects</NuxtLink></li>
              <li><NuxtLink to="/contact" class="text-gray-600 hover:text-gray-900">Contact</NuxtLink></li>
            </ul>
          </nav>
        </div>
      </header>
      <main class="container mx-auto px-6 py-10">
        <NuxtPage />
      </main>
      <footer class="bg-white py-4 mt-10 shadow-inner">
        <div class="container mx-auto text-center text-gray-600">
          © 2024 My Portfoli o
        </div>
      </footer>
    </div>
  </template>
  