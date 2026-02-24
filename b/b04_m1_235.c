section "b04_m1_235"{
    int var0 = Date_GetDateOption(2, 73);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401235_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That felt great!");
        Message_MsgSel("You were going too fast...", "Going around the curves was awesome!", "I'll explain my theory of maximum speed...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Until I reach the goal, I won't lift\nmy foot from the accelerator.\nThat's my style...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nThat's the real thrill of go-carts!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What did you say!?\nIt sounds interesting.\nI'll trust you to be my navigator!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401235_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I followed the racing lines well\nthis time.");
        Message_MsgSel("Speeding is against the law!", "I wasn't bored until the very end.", "I want to drive too!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401235_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Go rest over there.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, even if you do get a little\nbored, you immediately get caught up\nin the feeling again.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Interesting...\nLet me check your driving\ntechniques!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401235_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That was weird, right?\nWe were definitely faster!");
        Message_MsgSel("Yeah! Call whoever is in charge!", "You're scary, ｛Saeki＊＊｝...", "Don't be a sore loser!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No, I wouldn't go that far...\nBut it's incomprehensible, right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401235_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I'm scary. My bad.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0401235_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ah, sorry...\nI was a little too enthusiastic.");
                Message_Who(0);
                Message_MsgDisp("主人公", "When it comes to competition, you're\nlike a different person,\n｛Saeki＊＊｝.");
                Voice_PlayVoice("B0401235_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Really?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, really!");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401235_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah...\nWe'll ride whatever you want next,\nthen....\nAh, except for that certain thing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...\nIs he talking about the\nmerry-go-round?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401235_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hah... That's definitely true...\nBut we can still race!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
