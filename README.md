# 김나영 | Data Analyst & Backend Developer

서비스 데이터를 문제 정의, 지표 설계, 분석 결과, 백엔드 구현 흐름까지 연결하는 신입 데이터 분석가/백엔드 개발자 지망생입니다.  
은행, IT, 핀테크 분야에서 개인 금융 데이터, 공공 API 데이터, 서비스 운영 데이터를 분석 가능한 구조로 만들고 개선 액션까지 제안하는 역량을 키우고 있습니다.

## Focus

- Data Analysis with Python / SQL
- KPI Design & Business Insight
- ML Classification / Model Evaluation
- Public API Data Pipeline
- Backend API / Spring Boot / JPA
- PostgreSQL, SQLite, Supabase, Firebase

## Tech Stack

| Area | Tools |
| --- | --- |
| Analysis | Python, SQL, Pandas, NumPy, Excel, Tableau |
| ML / Data App | scikit-learn, Streamlit, SQLite, pytest |
| Backend & API | Java 17, Spring Boot, Spring Data JPA, Python, FastAPI, REST API, Node.js |
| Cloud DB / BaaS | PostgreSQL, Supabase, Firebase, H2 |
| App / Client | Flutter, Dart, Java, Android Studio, HTML/CSS |
| Collaboration | Git, GitHub, Figma, Notion |

## Featured Projects

### 1. JipFit AI

청년의 소득, 자산, 보증금, 월세, 관리비, 부채 조건을 바탕으로 주거비 부담 위험을 분류하고 주거 정책을 추천하는 데이터 분석/ML 프로젝트입니다.

- 6,000건의 합성 주거 시나리오 생성 및 SQLite 데이터 구성
- 총 주거비, 소득 대비 주거비 비율, 부채 버퍼 등 핵심 지표 설계
- Logistic Regression, Random Forest 등 모델 비교
- 선정 모델 성능: Accuracy 0.9308, Macro F1 0.9014
- Streamlit 기반 사용자 입력/결과 확인 화면 구성
- Repository: https://github.com/nadanaya/jipfit-ai

### 2. Weather Forecast Error

기상청 단기예보와 서울 ASOS 관측 데이터를 결합해 시간대별 강수 예보 오차 여부를 정의한 공공 API 데이터 파이프라인 프로젝트입니다.

- 기상청 단기예보 API와 ASOS 시간 관측 자료 수집
- 예보 강수 여부와 실제 강수 여부를 같은 시간 기준으로 정렬
- `forecast_rain != actual_rain` 기준으로 `forecast_error` 분류 타깃 생성
- 일 단위 요약값 대신 시간 관측값을 사용해 라벨 신뢰도 개선
- Repository: https://github.com/nadanaya/weather-forecast-error

### 3. Pigge Server

개인 가계부 앱을 위한 Spring Boot 백엔드 API입니다. 수입/지출 거래 저장, 사용자별 조회, 월별 집계, 잔액 조회, AI 소비 요약 흐름을 구현했습니다.

- Java 17, Spring Boot, Spring Data JPA 기반 거래 API 구현
- 사용자별 전체 거래 조회, 월별 거래 조회, 총 잔액 조회 API 구성
- 월별 수입/지출 집계 데이터를 AI 소비 요약으로 연결
- 금융/핀테크 백엔드 관점의 거래 정합성, 조회 성능, 배치 집계 개선 과제 도출
- Repository: https://github.com/nadanaya/pigge_server

### 4. FESTAI

AI·ESG 기반 지역축제 운영 플랫폼 백엔드로, 방문객 QR 모바일 웹·운영자 콘솔·참여업체 콘솔이 함께 쓰는 FastAPI 서비스입니다.

- FastAPI, PostgreSQL 기반 공개 조회 API와 방문객 AI 안내 기능 구현
- 게시 상태 필터링으로 승인·게시된 콘텐츠만 공개 API에 노출
- Alan AI 연동 시 질문별 컨텍스트 선택과 URL 길이 상한 처리로 안정성 확보
- 익명 방문 세션은 원문 토큰 대신 해시로 저장, 응답에 Alan AI 사용 여부 표시
- Repository: https://github.com/FEST-ON/Backend

### 5. DentalLink

치과 진료 전후 경험을 환자 앱과 관리자 웹으로 연결하는 통합 관리 서비스입니다.

- Supabase(PostgreSQL) 기반 환자, 예약, 대기 데이터 모델링
- QR/PIN 인증 흐름 설계
- Screen - Provider - Service - Model 계층 분리
- Supabase Realtime 기반 대기 상태 동기화
- Flutter, Provider, MVVM 구조 적용

### 6. AI Agent System

프로젝트 관리 데이터를 분석해 회의 요약, Action Item, 일정 리마인드, 리스크 분석, 최종 Markdown 보고서를 자동 생성하는 AI Agent 프로젝트입니다.

- Python 기반 Agent 분석 로직 구현
- LangGraph 기반 분석 흐름 구성
- Supabase(PostgreSQL) 저장 구조와 SQL 스키마 구성
- Discord Bot 명령과 Agent 실행 흐름 연동
- Repository: https://github.com/nadanaya/ai-agent

## Portfolio

- Portfolio Page: https://nadanaya.github.io/portfolio/
- Portfolio Repository: https://github.com/nadanaya/portfolio

## Learning & Activities

- ADsP 취득
- 정보처리기사 필기 합격
- BDA AI Agent 수업: OpenAI, HuggingFace, NLP, RAG 학습
- HP 멘토링 프로그램 참여
- ICPC 프로그래밍 대회 참가
- 특허전략 유니버시아드 참가

## What I Care About

데이터 분석은 차트를 만드는 일에서 끝나지 않고, 사용자의 문제를 지표로 정의하고 서비스 개선 액션으로 연결하는 일이라고 생각합니다.  
앞으로 금융/IT/핀테크 도메인에서 데이터를 신뢰할 수 있게 다루고, 분석 결과가 실제 제품과 시스템 개선으로 이어지도록 성장하고 싶습니다.
