section "b04_m5_187"{
    Background_Bg_GS2("BG_NE691_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_234_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE600_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That movie was the best!", "That movie was so-so.", "That movie was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("B0405187_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "What was so good about it? You're...\nnot joking?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 2);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(5, 3, (#1), 1);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("B0405187_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I was falling asleep many times\nthroughout the movie...\nI should have just slept...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(5, 3, (#1), 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405187_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Right... I couldn't stop yawning～...\n*Yawn*");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    }
