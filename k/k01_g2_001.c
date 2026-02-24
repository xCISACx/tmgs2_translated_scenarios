section "k01_g2_001"{
    Character_BlinkStart(11, 1, (#1), 1);
    Character_BlinkStart(11, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(11, 513) != 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder if ｛Onoda＊＊｝ is\nhere....\nAh, there she is!");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Onoda＊＊｝!");
        Music_PlayBGM(0, "MN_C_11_000_D00", 127, 40);
        Character_Chara_GS2(11, "G2_01F", 0);
        Voice_PlayVoice("", #1, "K0111000_K00000");
        Message_Who(11);
        Message_MsgDisp("Onoda", "｛主人公｝, I said that\nyou can't run in the corridors!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, sorry.\nI wanted to give you this right\naway.");
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("K0111000_K00100", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "... Is it a present?\nIs this perhaps for my birthday?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah. Open it!");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder if ｛Onoda＊＊｝ is\nhere....\nAh, there she is!");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Onoda＊＊｝!");
        Music_PlayBGM(0, "MN_C_11_000_D00", 127, 40);
        Character_Chara_GS2(11, "G2_01F", 0);
        Voice_PlayVoice("K0111000_K00200", #1, "K0111000_K00201");
        Message_Who(11);
        Message_MsgDisp("Onoda", "... ｛主人公｝.\nWhat is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, it's a birthday present.\nWill you accept it?");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(11, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("K0111000_K00300", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "... Present. But right now we are...");
        Message_Who(0);
        Message_MsgDisp("主人公", "As I thought, it's a bother for you\nto accept it.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("K0111000_K00400", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "No. Thanks.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, open it!");
        }
    if (Parameter_GetCh1Param(11, 67) == 1){
        if (Parameter_GetCh1Param(11, 513) != 1){
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("K0111000_K00500", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "... Eh?\nIs it okay for me to accept such an\namazing thing?");
            Character_BlinkStart(11, 2, (#1));
            Voice_PlayVoice("K0111000_K00600", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "I'm glad... Thank you very much.\nI will treasure it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay, she looks really happy!)");
            Music_StopBGM(0, 40);
            }
        else {
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("K0111000_K00700", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "......... It's cute.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Isn't it? Do you like it?\nI'll see you later!");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(11, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("K0111000_K00800", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "U-Umm...! ... Thank you.");
            SoundEffect_PlayStream(3, "SS_DSE_060_000");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(11, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank goodness, she looks happy.)");
            SoundEffect_StopStream(3, 40);
            }
        Parameter_AddCh1Param(11, 60, 3);
        }
    else if (Parameter_GetCh1Param(11, 67) == 2){
        if (Parameter_GetCh1Param(11, 513) != 1){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("K0111000_K00900", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Thank you very much.\nI will treasure it.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(11, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(She looks relatively happy.)");
            }
        else {
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(11, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("K0111000_K01000", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "... Thank you very much.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(11, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(She looks relatively happy.)");
            }
        Parameter_AddCh1Param(11, 60, 2);
        }
    else if (Parameter_GetCh1Param(11, 67) == 3){
        if (Parameter_GetCh1Param(11, 513) != 1){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("K0111000_K01100", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Umm, what do you mean by this...");
            Character_BlinkStart(11, 3, (#1));
            Voice_PlayVoice("K0111000_K01200", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "... I understand your intentions.\nThank you very much.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(11, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, it looks like she wasn't that\nhappy about it...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("K0111000_K01300", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "... Thanks. I will...\naccept it for now.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(11, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Crap!\nIt looks like I gave her something\nshe doesn't like.)");
            }
        Parameter_AddCh1Param(11, 60, 1);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(11, 86, 1);
    }
