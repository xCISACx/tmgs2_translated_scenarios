section "b04_m2_042"{
    Background_Bg_GS2("BG_WF420_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_092_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF400_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Message_PauseSkinship();
        Voice_PlayVoice("B0402042_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah, it was awesome.\nThere's still enthusiasm in the air\nand the excitement isn't dying\ndown...");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 4);
        Message_PauseSkinship();
        Voice_PlayVoice("B0402042_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I see.\nIf you could enjoy yourself, even a\nlittle, then it's fine by me.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("B0402042_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Really.\nOur interests aren't really the\nsame, are they?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    }
