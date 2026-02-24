section "i23_m4_000"{
    Background_Bg_GS2("BG_AR200_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "I'm the new person starting today,\n｛主人公姓名｝.\nI look forward to working with you.");
    Voice_PlayVoice("I2304000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Manager", "Your shift is every Wednesday and\nFriday, right?\nI'm counting on you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes, I know.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
    if (Parameter_GetCh1Param(4, 514) != 1){
        System_Call_GS2("A02", "M4", 300);
        }
    else {
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_13F", 0);
            Voice_PlayVoice("I2304000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo. Are you starting today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝.\nI look forward to working with you!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("I2304000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nMake sure that you study so that you\ncan answer questions that the\ncustomers ask.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_13F", 0);
            Voice_PlayVoice("I2304000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo. Are you starting today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝!\nI look forward to working with you!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("I2304000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nYou don't know much about music or\ninstruments, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I2304000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Quite a few people ask \"where is\nthis\", and \"where is that\", so\nremember the instrument names and\nlocations.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("I2304000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If you're asked any additional\nquestions, I'll come and help you\nout.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("I2304000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Then you come in and steal the show!\nThat way, you'll also be Nei's super\nworker!");
            Character_ChFace(0, 2, 1);
            Voice_PlayVoice("I2304000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If you get it, then go work, my\nnumber 1 apprentice!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(So I'm his apprentice...)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_13F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.");
            Voice_PlayVoice("I2304000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo....\nWhy did you choose to work here?");
            Voice_PlayVoice("I2304000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Did you maybe wanna be with me...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 3, 1);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("I2304000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "No! Nothing!");
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I2304000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's nothing...\nI was just thinking that it'd be\nnice if it were true...\nNot!");
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("I2304000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Anyway!\nI'm looking foward to working with\nyou!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("I2304000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If there's something you don't know,\nask me right away!\nMe!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.\nI look forward to working with you,\n｛Hariya＊＊｝.");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
