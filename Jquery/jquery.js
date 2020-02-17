$(document).ready(function() {

    // Sliding Effects
    $('#flip').click(function() {
        //$('#panel').slideDown(2000);
        if($(this).html() == 'Click Me to Slide Down')
        {
            $('#panel').slideDown(2000);
            $(this).html('Click Me to Slide Up');
        } else {
            $('#panel').slideUp(2000);
            $(this).html('Click Me to Slide Down');
        }
    })

    $('#flip').mouseenter(function() {
        $('#panel').slideToggle(1000);
    })






    // fading effect
    $('#f1').click(function() {
        $('#panel').fadeIn(3000);
    })
    $('#f2').click(function() {
        $('#panel').fadeOut(2000);
    })
    $('#f3').click(function() {
        $('#panel').fadeToggle(1000);
    })
    $('#f4').click(function() {
        $('#panel').fadeTo(1000, 0.3);
    })











    // on method
    $('p').on({
        click : function(){
            $(this).css("color","red");
        },
        dblclick : function() {
            $(this).css("color", "black");
        },
        mouseenter: function() {
            $(this).css("fontSize", "1.2rem");
        },
        mouseout : function() {
            $(this).css("fontSize","16px");
        }

    })







    // hide show and toggle
    $('#b1').click(function() {
        // $('#demo').hide(2000);
        if($(this).html() == 'Hide')
        {
            $('#demo').hide(1000);
            $(this).html('Show');
        } else {
            $('#demo').show(1000);
            $(this).html('Hide');
        }
    })

    $('#b2').click(function() {
        $('#demo').show(3000);
    })
    $('#b3').click(function() {
       $('#demo').toggle(1000); 
    })
})