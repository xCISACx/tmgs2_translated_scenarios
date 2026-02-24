section "b04_m5_042"{
    Background_Bg_GS2("BG_WF420_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_092_000");
    Screen_WipeIn(2);
    System_TouchWait();
    Screen_WipeOut(2);
    SoundEffect_StopStream(2, 40);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Character_ChFace(0, 2, 5);
    Character_BlinkStart(5, 2, (#1));
    Character_ChFace(0, 3, 0);
    Background_Bg_GS2("BG_WF400_CO_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(5, 2, (#1));
        Voice_PlayVoice("B0405042_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Really!? Hmm...\nI couldn't find anything nice about\nit, though...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 2);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("B0405042_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'm weak against that kind of\npain...\nSorry.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(5, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405042_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Right...\nI wonder what's so good about seeing\nthings get hurt like that...");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    }
