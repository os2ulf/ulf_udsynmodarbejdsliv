jQuery(function($){

	$(document).ready(function(){

    $("nav.nav ul.nav--inner").clone().appendTo("#mobile-menu");
    $("#mobile-menu ul li .logo").parent().remove();
		$("#mobile-menu").mmenu({
			offCanvas: {
				position: "right"
			}
		});
    $('#mobile-menu ul#mm-0').prepend('<li class="mm-subtitle"><span class="mm-subclose">Menu</span></li>');
    $('.mm-subopen').click(function() {
      var subLink = $(this).attr('href');
      $('#mobile-menu').find(subLink).trigger("open.mm");
    });
    $('.mm-subclose').click(function() {
      var subLink = $(this).attr('href');
      $('#mobile-menu').find(subLink).trigger("open.mm");
    });
    $("#menu-trigger").click(function() {
			 $("#mobile-menu").trigger("open.mm");
		});
    $('.comment-form--trigger').click(function() {
      if ($('.comment-form').hasClass('expanded')) {
        $('.comment-form').removeClass('expanded');
        $(this).find('.inactive').show();
        $(this).find('.active').hide();
      } else {
        $('.comment-form').addClass('expanded');
        $(this).find('.inactive').hide();
        $(this).find('.active').show();
      }
    });

  }); // END document ready

  searchBoxSticky();

  function searchBoxSticky() {
    $(window).on("scroll", function() {
      if ($('#searchBoxApp').length > 0) {
        var searchBoxOffset = $("#searchBoxApp").parent().offset();
        var searchBoxWidth = $("#searchBoxApp").parent().width();
        var searchBoxHeight = $("#searchBoxApp").height();
        var scroll = $(window).scrollTop();
        if (scroll >= searchBoxOffset.top && window.innerWidth >= 720) {
          $("#searchBoxApp").addClass('sticky').css('left', searchBoxOffset.left).css('width', searchBoxWidth);
          $("#searchBoxApp").parent().css('padding-top', searchBoxHeight);
        } else {
          $("#searchBoxApp").removeClass('sticky').css('left', 'auto').css('width', 'auto');
          $("#searchBoxApp").parent().css('padding-top', 0);
        }
      }
    });
    $(window).on('resize', function() {
      if ($('#searchBoxApp').length > 0) {
        var searchBoxOffset = $("#searchBoxApp").parent().offset();
        var searchBoxWidth = $("#searchBoxApp").parent().width();
        var searchBoxHeight = $("#searchBoxApp").height();
        if ($("#searchBoxApp").hasClass('sticky') && window.innerWidth >= 720) {
          $("#searchBoxApp").addClass('sticky').css('left', searchBoxOffset.left).css('width', searchBoxWidth);
          $("#searchBoxApp").parent().css('padding-top', searchBoxHeight);
        } else {
          $("#searchBoxApp").removeClass('sticky').css('left', 'auto').css('width', 'auto');
          $("#searchBoxApp").parent().css('padding-top', 0);
        }
      }
    }); // END window load
  }

}); // END function
