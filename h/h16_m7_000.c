section "h16_m7_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        if (Parameter_GetCh1Param(7, 130) <= 3){
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes! They won!");
            Voice_PlayVoice("H1607000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Congratulations, Baseball Club.\nI watched a good game.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad they won...)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes! They won!");
            Voice_PlayVoice("H1607000_G00100", 7, "H1607000_G00101");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Congratulations,\n｛主人公｝.\nPlease draw a heart in the score\nbook.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, that's kind of...");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1607000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Isn't that fine?\nWhen the players see it later,\nthey'll surely be happy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is that so...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe I should draw one...\nAs expected, I'm so glad they won!)");
            }
        }
    else {
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Character_Chara_GS2(7, "M7_01F", 0);
        if (Parameter_GetCh1Param(7, 130) <= 3){
            Voice_PlayVoice("H1607000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This is unfortunate.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh, they lost...");
            Character_BlinkStart(7, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1607000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Manager-san, don't mind....\nOr rather, take it easy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It's still the same, no matter what\nwords you use...\nThis is unfortunate...)");
            }
        else {
            Character_BlinkStart(7, 0, (#1));
            Voice_PlayVoice("", 7, "H1607000_G00500");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nThat was unfortunate.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Sigh* They lost...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H1607000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This is why you should also do your\nbest.\nTo get over this bitterness, you\nwill need your score book.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H1607000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So, don't make me sad anymore.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right...\nBut it is still unfortunate...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
