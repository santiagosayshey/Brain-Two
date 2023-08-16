new Vue({
  el: '#example',
  data: {
    name: 'Hello'
  },
  // define methods under the `methods` object
  methods: {
    greet: function (event) {
      // `this` inside methods points to the Vue instance
      this.name = "Hi";
    }
  }
})
