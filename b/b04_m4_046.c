section "b04_m4_046"{
    Background_Bg_GS2("BG_WF460_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF400_CO_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(4, 2, (#1), 2);
        Character_ChFace(1, 4, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0404046_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "That was a blast! ... It got me!\nAwesomely good!");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 2);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(4, 2, (#1), 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0404046_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You didn't enjoy that?\nAre you serious...? What a waste...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 8);
        Voice_PlayVoice("B0404046_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "*Sigh* Do you realize you're a bit\nselfish!?\nDon't come back!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        }
    }
