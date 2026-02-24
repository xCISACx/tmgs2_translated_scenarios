section "w01_g1_000"{
    if (Parameter_ChkHoliday(2) != 1){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "｛主人公｝.");
        Music_PlayBGM(0, "MN_C_10_000_D00");
        Character_Chara_GS2(10, "G1_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Aah, ｛Toudou＊＊｝.\nWhat's up?");
        Voice_PlayVoice("W0110000_J00000", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Are you free next Sunday?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Why?");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("W0110000_J00100", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "This is embarrassing, but I have\nfour complimentary tickets to the\nAmusement Park.");
        Voice_PlayVoice("W0110000_J00200", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "I got them from someone I helped,\nbut I can't give them out to anyone.\nWant to come with me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Four...\nDo you plan on inviting anyone else?");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("W0110000_J00300", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Yes... I think.\nBut for now, do you want to go?");
        Message_MsgSel("Yeah, I'll go!", "Sorry, I have plans.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("W0110000_J00400", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Then next Sunday.\nDon't forget, okay?");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(10, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next Sunday...\nI'm looking forward to it!)");
            Date_SetNextSandayDateEvent(10);
            break ;
            case 1:
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("W0110000_J00500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "It can't be helped.\nI will ask others.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(10, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("W0110000_J00600", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "I'm sorry I stopped you. Goodbye.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, sorry...");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(10, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(She went through all that trouble\nto ask me...\nMaybe it was wrong of me to turn her\ndown...)");
            break ;
            }
        Parameter_AddCh1Param(10, 86, 1);
        }
    else {
        int var0 = Parameter_GetPl1Param(12);
        switch (var0){
            case 0:
            Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder who it might be...?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("M0210000_J00000", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Hello? It's Toudou.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Aah, ｛Toudou＊＊｝.\nWhat's up?");
        Voice_PlayVoice("W0110000_J00700", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Are you free next Sunday?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Why?");
        Voice_PlayVoice("W0110000_J00800", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "This is embarrassing, but I have\nfour complimentary tickets to the\nAmusement Park.");
        Voice_PlayVoice("W0110000_J00900", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "I got them from someone I helped,\nbut I can't give them out to anyone.\nWant to come with me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Four...\nDo you plan on inviting anyone else?");
        Voice_PlayVoice("W0110000_J01000", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Yes... I think.\nBut for now, do you want to go?");
        Message_MsgSel("Yeah, I'll go!", "Oh, that day I'm a little busy...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("W0110000_J01100", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Aah, good. Well then, Sunday it is.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, understood.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next Sunday...\nI wonder who else is coming?)");
            Date_SetNextSandayDateEvent(10);
            break ;
            case 1:
            Voice_PlayVoice("W0110000_J01200", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "It can't be helped.\nI will invite other kids.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, sorry...");
            Voice_PlayVoice("W0110000_J01300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "No, don't worry about it.\nIt was short noticed. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(She went through all that trouble\nto ask me...\nMaybe it was wrong of me to turn her\ndown...)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
