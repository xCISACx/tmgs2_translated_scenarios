section "p83_m4_000"{
    Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetCh1Param(4, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh... I'm dizzy!\nWe're busier than usual during the\nCulture Festival.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_17F", 0);
            Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
            Voice_PlayVoice("", 4, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝! What's up?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P7304000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I came to photocopy stuff.\nI want double-sided copies.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, I'll do that for you then.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("P7304000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, I'm counting on you.\nPlease get me 100 copies!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.");
            }
        else if (Parameter_GetCh1Param(4, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh... I'm dizzy!\nWe're busier than usual during the\nCulture Festival.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_17F", 0);
            Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
            Voice_PlayVoice("", 4, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝!\nIs something wrong?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P7304000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I came to photocopy stuff.\nI want double-sided copies.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, I'll do that for you then.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7304000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Tell me where to do it.\nYou look like you're busy.\nI feel kinda bad about it...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, you don't have to refuse.\nIt's really simple!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("P7304000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Really?\nThen please get me 100 copies!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes!");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetCh1Param(4, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Additional pamphlets will be\narriving from the print shop in an\nhour～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew*...\nBeing in charge of materials is hard\nwork!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
            Voice_PlayVoice("P7304000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝!\nDid you come here to help?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7304000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "As if I did. I also have work to do.\nGet me some pushpins.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Pushpins, got it!");
            }
        else if (Parameter_GetCh1Param(4, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "Additional pamphlets will be\narriving from the print shop in an\nhour～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew*...\nBeing in charge of materials is hard\nwork!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
            Voice_PlayVoice("", 4, "P7304000_D00700");
            Message_Who(4);
            Message_MsgDisp("Hariya", "｛主人公｝. Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝! What's up?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("P7304000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I was just thinking about having\nsome tea together if you've got the\ntime...\nBut it looks like you're busy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...\nIf things calm down here, I think I\ncan...");
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P7304000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah, right!\nI remember I've got stuff to do.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7304000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You said, \"I've got something I\nneed.\nI'm coming to get some pushpins\".");
            Message_Who(0);
            Message_MsgDisp("主人公", "We'll have tea later.\nI'll get some pushpins for you.");
            }
        }
    else {
        if (Parameter_GetCh1Param(4, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Be thorough in the hygiene\ninspection of food-related places.\nAlso, watch out for signs sticking\nout in the corridors.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew～*, I was asked to be in\ncharge of the floor, so I've got a\nlot of things to do...)");
            Character_ChFace(0, 2, 2);
            Character_Chara_GS2(4, "M4_01F", 0);
            Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
            Voice_PlayVoice("", 4, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "｛主人公｝...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Hariya＊＊｝?\nWhat's up?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("P7304000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, somehow, I found a lost little\ngirl...\nWhat should I do?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Got it. Leave it to me!");
            }
        else if (Parameter_GetCh1Param(4, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "Be thorough in the hygiene\ninspection of food-related places.\nAlso, watch out for signs sticking\nout in the corridors.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew～*, I was asked to be in\ncharge of the floor, so I've got a\nlot of things to do...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
            Voice_PlayVoice("P7304000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo. You look busy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝. What's up?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("P7304000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I heard you were in charge over\nhere, so...\nNo, don't worry about it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("P7304000_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I brought a lost little girl.\nFind her parents for me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Wah, got it! Leave it to me!");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P84", "M4", 0);
    }
