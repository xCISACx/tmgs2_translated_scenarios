section "p84_m7_000"{
    Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "The guest had some cheap tea...");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("", 7, "P7407000_G00000");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, thank you.\nThe person in charge makes some nice\ntea.");
            Voice_PlayVoice("P7407000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The timing for serving it was great.\nThe tea was delicious, too.\nReceiving it was a benefit for\nSensei.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "The guest had the cheap tea... Aah!");
            SoundEffect_PlayStream(3, "SS_T_00_268_M00");
            Voice_PlayVoice("P7407000_W00200", #1, "");
            Message_Who(0);
            Message_MsgDisp("Guest", "Whoa!!");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("P7407000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It was fortunate that the guest did\nnot sustain an injury.\nHowever...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes... I'm sorry...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... Big mistake...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes, the batteries are here!\nFour perfectly new ones reserved.)");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, ｛Wakaouji＊＊｝, here you\nare.");
            Voice_PlayVoice("", 7, "P7407000_G00400");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Thank you, ｛主人公｝.\nThe problem is solved.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7407000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You started as soon as I asked.\nYou can manage pretty well.\nExcellent, excellent.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow, I don't know where the\nbatteries were placed!\nWhere could I have put them?)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("", 7, "P7407000_G00600");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Are you there,\n｛主人公｝?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I-I'm sorry!\nPlease wait a little more!!");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P7407000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Seems serious.\nAs I thought, Sensei will go\npurchase some.\nYou do not need to search any\nfurther.");
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... Big failure...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nOkay, the poster is completed and\nput up!\nEven though I rushed, it was quite a\ngood result.)");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("P7407000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That's pretty easy to read.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nI made the poster.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("", 7, "P7407000_G00900");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Great, ｛主人公｝!\nNow no one will ever get lost.\nIt's also easier on Sensei, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nOkay, the poster is completed and\nput up!\nI made it in a hurry, I wonder if\nit's good enough like this...)");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("P7407000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This is a little...\nWhat in the world is this?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nI made the poster.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7407000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well... This is a maze, not a map.\nThere is no orienteering.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, big mistake...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
