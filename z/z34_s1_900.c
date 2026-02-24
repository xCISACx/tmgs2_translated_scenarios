section "z34_s1_900"{
    int var0;
    var0 = 0;
    Character_Chara_GS2(14, "S1_04F", 0);
    int var1 = Parameter_GetPl1Param(12);
    switch (var1){
        case 0:
        Background_Bg_GS2("BG_HO200_?_0", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_0", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_0", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_0", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_MsgSel("Hear explanation", "Don't hear explanation");
    switch (Message_TextSelect()){
        case 0:
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(14, 0, (#1), 2);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("SK_14_00_N00200", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "There are three ways of doing\nskinship: touch, slide and rub.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(14, 0, (#1), 2);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("SK_14_00_N00300", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Touch by pressing the screen.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(14, 0, (#1), 2);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("SK_14_00_N00400", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Use touch when you're staring hard.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(14, 0, (#1), 2);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("SK_14_00_N00500", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Slide quickly to draw a line.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(14, 0, (#1), 2);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("SK_14_00_N00600", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "If you slide or rub his head, you\ncan tease him.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(14, 0, (#1), 2);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("SK_14_00_N00700", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Slide over his body to get close to\nhim and linked arms.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(14, 0, (#1), 2);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("SK_14_00_N00800", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "You can rub and slide many times.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(14, 0, (#1), 2);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("SK_14_00_N00900", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "You can stroke his head or pull on\nhis arm.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(14, 0, (#1), 2);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("SK_14_00_N01200", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Gently touching and rubbing are two\ndifferent things.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(14, 0, (#1), 2);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("SK_14_00_N01300", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Think about the place the other\nperson would want to be touched.");
        break ;
        case 1:
        Character_ChFace(0, 0, 10);
        break ;
        }
    Character_ChMove(14, 1);
    Run_EtcSkinShip(14, 1, 1, 0);
    System_GlobalWork(2, 0, 1);
    while (var0 == 0){
        Character_ChFace(1, 0, 10);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("SK_14_00_N08800", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Practice on me anytime.... Hehe.");
        Character_ChFace(1, 0, 0);
        Character_ChFace(1, 4, 0);
        Voice_PlayVoice("SK_14_00_N08700", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Got it?");
        Message_MsgSel("I understand!", "One more time...");
        switch (Message_TextSelect()){
            case 0:
            var0 = 1;
            break ;
            case 1:
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(14, 0, (#1), 2);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("SK_14_00_N01600", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Try practicing some more, okay?");
            Run_EtcSkinShip(14, 1, 1, 0);
            break ;
            }
        }
    }
