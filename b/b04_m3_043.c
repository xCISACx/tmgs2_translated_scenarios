section "b04_m3_043"{
    Background_Bg_GS2("BG_WF430_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MN_B_SC_920_000");
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
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Character_ChFace(1, 0, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403043_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The best...\nIt is hard to call it that, but it\nwas quite good.\nIf you were able to enjoy it, then I\nam glad.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403043_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Really?\nTo me, I think that the event could\nbe appreciated a little more.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0403043_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... I see.\nI was able to enjoy it quite a bit,\nbut it means that you have wasted\nyour time.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    }
