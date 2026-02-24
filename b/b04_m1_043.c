section "b04_m1_043"{
    Background_Bg_GS2("BG_WF430_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MN_B_SC_920_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF400_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401043_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah, it was awesome!\nI thought I'd try to see through the\nact, but I had no idea how it worked\nat all.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401043_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I liked it. Illusions are amazing...");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("B0401043_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That was!? You're weird, you know?\nAnd that's coming from me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    }
