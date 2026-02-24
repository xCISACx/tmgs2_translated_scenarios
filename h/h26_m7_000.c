section "h26_m7_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        if (Parameter_GetCh1Param(7, 130) <= 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "H2607000_G00000");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That was good,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, with your support, we won!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 3, (#1));
            Voice_PlayVoice("H2607000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "To do one's best is an amazing\nthing.\nThe way I'll go about training the\nTrack and Field Club may have\nchanged a bit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I'm glad I did my best!)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("H2607000_G00200", 7, "H2607000_G00201");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That was good,\n｛主人公｝.\nIt was a very good match.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks you very much,\n｛Wakaouji＊＊｝.");
            Voice_PlayVoice("H2607000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I'm not just seeing what I want to\nsee when I say that your playing was\neffective.\nIt is the result of practicing every\nday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad that we won!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(7, 130) <= 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("H2607000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So it ended up like this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh, we lost...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2607000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "There are times when that happens.\nIt seems like it has nothing to do\nwith the energy of the advisor.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... That was unfortunate...)");
            }
        else {
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "H2607000_G00600");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nThat was unfortunate.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Sigh* We lost...");
            Character_BlinkStart(7, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2607000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I do not think that your strategies\nwere bad.\nIt was poor teamwork.");
            Voice_PlayVoice("H2607000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "If you practice a little more with\neveryone, the next game will have a\ndifferent result.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right... But it was unfortunate...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
