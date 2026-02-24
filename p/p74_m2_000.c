section "p74_m2_000"{
    Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, it somehow managed to be a\nsuccess.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("P8402000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Good job.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.\nHow was it?");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8402000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I was quite surprised by its\nmagnificence.\nYou looked like a real model.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Shiba＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... I fell.\nWhat a big mistake...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("P8402000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Good job.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝...");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8402000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You made me see something great.\nNice slide.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, embarrassing...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, it somehow managed to be a\nsuccess.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.\nHow was it?");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("P8402000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nThe way you showed that dress and\nhow you walked...\nYou practiced quite a lot?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, yeah.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P8402000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... As a result, you came through.\nIt felt elegant.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Shiba＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... I fell.\nWhat a big mistake...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝...");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("P8402000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... That was bold.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... You saw it?");
            Voice_PlayVoice("P8402000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI hope there won't be any bruises.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, it somehow managed to be a\nsuccess.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝....\nHow was it?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("P8402000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I wish I could have stopped it....\nEven by sheer strength.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? What did you just say...?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P8402000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You were so beautiful.\nThe guests were charmed by you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Th-Thank you,\n｛Shiba＊＊｝...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was praised by\n｛Shiba＊＊｝!\nI'm so happy!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... What a big mistake...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("P8402000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Good job.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝... I fell.");
            Voice_PlayVoice("P8402000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Saw it. Did you get a sprain?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, I'm alright.");
            Voice_PlayVoice("P8402000_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I see.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8402000_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nBefore that happened, you were like\na different person who was under a\nspell...");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8402000_B01400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "The moment you fell down, you came\nback to your usual self.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ahaha...\nThe spell was removed that fast,\nright?");
            Character_BlinkStart(2, 0, (#1));
            Voice_PlayVoice("P8402000_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... That's better. To me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8402000_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I don't want more guys being\nhypnotized by you other than me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Shiba＊＊｝...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
