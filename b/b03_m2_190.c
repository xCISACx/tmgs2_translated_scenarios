section "b03_m2_190"{
    if (Date_ChkDateOpen(61) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR100_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0302190_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ehh... It's completely red.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 191);
        }
    else if (Date_ChkDateOpen(62) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
        Background_Bg_GS2("BG_TR100_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0302190_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Right.\nMake sure the foot fasteners on your\nskis are secure.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 192);
        }
    }
