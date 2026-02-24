section "b04_m3_042"{
    Background_Bg_GS2("BG_WF420_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_092_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF400_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0403042_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Really...?\nThere really is no need to praise it\nthat much, is there?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403042_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes, there is still one thing that I\ndo not understand.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403042_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes...\nI just wanted something that could\nhave been a little more enjoyable.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    }
