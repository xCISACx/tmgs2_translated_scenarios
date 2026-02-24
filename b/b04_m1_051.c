section "b04_m1_051"{
    int var0 = Date_GetDateOption(2, 13);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401051_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I see, a sky garden... I get it.");
        Message_MsgSel("It's like paradise, floating in the sky!", "It's a giant, 360 degree panorama!", "It's not actually in the sky!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401051_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "\"Paradise\"... Hey you, stop that.\nYou're not a tour guide.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401051_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Maybe.... Hey, what's a \"panorama\"?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401051_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah!\nYou say intelligent things,\nsometimes...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_D?F", 0, 1, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401051_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "What a nice view....\nWe should have come earlier.");
        Message_MsgSel("It seems like it would be nice at night, too.", "It would be nice if we could live here.", "You were late, ｛Saeki＊＊｝～!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401051_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Just seeing the sun rise from here\nwould be the best part...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401051_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You wanna try living here!?\nYou're quite outrageous.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0401051_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... My bad. Just leave me alone.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401051_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ehh...\nThey said they'll take commemorative\nphotos for you.");
        Message_MsgSel("Let's get one with the sky in the background!", "Forget about it. It's expensive.", "Let's take a lovey-dovey shot then▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401051_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Nice.\nLet's go ask if they'll take one for\nus.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 3, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401051_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "That's definitely true for a place\nlike this.\nLet's economize then, economize.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401051_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", ".........\nForgive me if I don't do it with the\nlovey-dovey feeling.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401051_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hey, you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "W-We can't?\nThen we'll do it without the\nlovey-dovey feeling.");
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401051_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No...\nI don't mind, if it's just a lovey\nfeeling.");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
