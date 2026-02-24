section "b04_m4_143"{
    int var0 = Date_GetDateOption(2, 38);
    Background_Bg_GS2("BG_NE240_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404143_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah. Amazing... It was so great...!\nLives are definitely good.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404143_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Don't speak as if you know.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404143_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "This is why you're an amateur...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404143_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Lives are definitely the best!\nThe sounds are lively.");
        Message_MsgSel("Music really does grab the heart.", "The energy's different once it's live.", "My ears are starting to hurt.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404143_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, I was moved today, too!\nEspecially the part where everyone\nsang...!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404143_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's obvious!\nThat's why I can't stop coming to\nlives!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404143_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Because the speaker was right in\nfront of us...\nAnyway, get used to it fast!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(4, 3, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404143_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...... Ugh......");
        Message_MsgSel("Are you crying?", "Are you tired because you jammed too much?", "The performance today was not good enough.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404143_D00800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... I'm not crying!\nTurn your head there! Ugh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404143_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I think it's ideal for a live to let\nthe crowd cry involuntarily.");
                Voice_PlayVoice("B0404143_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "But, to make people cry during live,\nI think it's not an easy thing to\ndo.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404143_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Touching hearts using songs, with a\nvoice...\nI want to be that kind of\nvocalist...!");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm sure you will,\n｛Hariya＊＊｝!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404143_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah, I will!");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404143_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Oh! ...\nLet's keep it a secret that I cried.");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404143_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hmm... Yeah, well.\nI had a real blast today.\nYou really jammed too.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404143_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You don't know the best part of\ntoday's live then.\nI can't talk with you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    if (Parameter_ChkSpEvent("B05", "M4", 2) != 0){
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B05", "M4", 2);
        }
    }
