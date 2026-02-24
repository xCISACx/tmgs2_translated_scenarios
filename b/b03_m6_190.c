section "b03_m6_190"{
    if (Date_ChkDateOpen(61) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR100_AU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306190_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's bright red on the mountain...\nWell then, shall we go?");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Background_Bg_GS2("BG_TR100_AU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306190_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I can see the Autumn tinted leaves\nfrom here!\nWell, it's best if we get going.");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 191);
        }
    else if (Date_ChkDateOpen(62) == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(6, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_TR100_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0306190_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, it's pure white!\nLet's slide soon!");
            }
        else {
            Voice_PlayVoice("B0306190_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, it's pure white!\nHey, let's slide soon!");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 192);
        }
    }
