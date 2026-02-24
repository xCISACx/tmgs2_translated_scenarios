section "p83_m6_000"{
    Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "10 copies, take it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* We're busier than usual\nduring the Culture Festival.)");
            Voice_PlayVoice("P7306000_F00000", 6, "P7306000_F00001");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yoo-hoo, ｛主人公｝.\nAre you usually this peppy?");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝!\nIs something wrong?");
            Voice_PlayVoice("P7306000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yes, I came to pick up the copies of\nthe material for the display.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, well then, I'll do it!");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "10 copies, take it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* We're busier than usual\nduring the Culture Festival.)");
            Voice_PlayVoice("", 6, "P7306000_F00200");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝!\nAre you doing your best?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝!\nIs something wrong?");
            Voice_PlayVoice("P7306000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You're too noisy, Senpai.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7306000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... I'm kidding, I'm kidding.\nI came to pick up the copies of the\nmaterials for the display.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, well then, I'll do it!");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've collected the drills!\nThe additional pamphlets will arrive\nfrom the print shop in one hour!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew* I didn't think being in\ncharge of materials would be this\ntough...)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝!\nIs something up?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7306000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Umm, where's the projector?\nI asked, but it hasn't come, yet.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, is that right?\nWell then, I'll go look for it!");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've collected the drills!\nThe additional pamphlets will arrive\nfrom the print shop in one hour!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew* I didn't think being in\ncharge of materials would be this\ntough...)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝!");
            Voice_PlayVoice("P7306000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, where is the person in charge\nof the materials?\nThe projector for our class hasn't\narrived, yet.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7306000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm sorry, you seem busy.\nI'll treat you to cake as a thanks\nnext time!\nPlease!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.\nLeave it to me to find it at once!");
            }
        }
    else {
        if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Be thorough in the hygiene\ninspection of food-related places.\nAlso, watch out for signs sticking\nout in the corridors.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew～* I was asked to be in charge\nof the floor, so I've got lots of\nthings to do...)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝!\nIs something up?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7306000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The music in the class next door is\ntoo noisy!\nWill you come show them some\nguidance, Senpai?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, leave it to me!");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "Be thorough in the hygiene\ninspection of food-related places.\nAlso, watch out for signs sticking\nout in the corridors.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew～* I was asked to be in charge\nof the floor, so I've got lots of\nthings to do...)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Music_PlayBGM(0, "MN_C_06_000_D02", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝!\nIs something up?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7306000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The music in the class next door is\ntoo noisy.");
            Voice_PlayVoice("P7306000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "And since you're a person from the\nStudent Council, you have to come\nspeak to everyone.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, well then, I will go.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7306000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Eh, is that okay? You seem busy...\nI'm sorry for being a nuisance.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I don't mind ｛Amachi＊＊｝.\nIt's my responsibility.");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P84", "M6", 0);
    }
